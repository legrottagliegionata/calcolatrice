#include "pentagono.h"
#include "triangolo.h"

Pentagono::Pentagono(const Pentagono & T):PoligonoConvesso(T){set_lati(T.Lista);}


Pentagono::Pentagono(const vector<Vertice>&V):PoligonoConvesso(V,5,"Pentagono"){
      set_lati(V);
}

double Pentagono::get_perimetro()const{
  return lati[0]+lati[1]+lati[2]+lati[3]+lati[4];
}

double Pentagono::get_area()const{
  unsigned int a=0,b=1, c=2;
  double area=0;
  while(c < Lista.size()){
      area+= Triangolo({Lista[a], Lista[b], Lista[c]}).get_area();
      c++;b++;
    }
  return area;
}

std::ostream& operator<< (std::ostream& os,const Pentagono& T){
 os<<T.toString();
 return os;
}

void Pentagono::set_lati(const vector<Vertice>& v){
  lati[0] = std::sqrt((std::pow((v[1].get_X()-v[0].get_X()),2)+std::pow(v[1].get_Y()-v[0].get_Y(),2)));
  lati[1] = std::sqrt((std::pow((v[2].get_X()-v[1].get_X()),2)+std::pow(v[2].get_Y()-v[1].get_Y(),2)));
  lati[2] = std::sqrt((std::pow((v[3].get_X()-v[2].get_X()),2)+std::pow(v[3].get_Y()-v[2].get_Y(),2)));
  lati[3] = std::sqrt((std::pow((v[4].get_X()-v[3].get_X()),2)+std::pow(v[4].get_Y()-v[3].get_Y(),2)));
  lati[4] = std::sqrt((std::pow((v[0].get_X()-v[4].get_X()),2)+std::pow(v[0].get_Y()-v[4].get_Y(),2)));
}

string Pentagono::toString() const{
  string s ="Pentagono: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  s+= " Lati ab:"+to_string_nozero(lati[0])+ ", bc:"+to_string_nozero(lati[1])+ ", cd:"+to_string_nozero(lati[2])+ ", de:"+to_string_nozero(lati[3])+ ", ea:"+to_string_nozero(lati[4]);
  return s;
}

