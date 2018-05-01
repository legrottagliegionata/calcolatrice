#include "triangolo.h"

Triangolo::Triangolo(const Triangolo & T):PoligonoConvesso(T){set_lati(T.Lista);}


Triangolo::Triangolo(const vector<Vertice>&V):PoligonoConvesso(V,3,"Triangolo"){
      set_lati(V);
}

double Triangolo::get_perimetro()const{
  return lati[0]+lati[1]+lati[2];
}

double Triangolo::get_area()const{
  //semiperimetro
  double p = get_perimetro()/2;
  double x =p*(p-lati[0])*(p-lati[1])*(p-lati[2]);
  return std::sqrt(x);
}

std::ostream& operator<< (std::ostream& os,const Triangolo& T){
 os<<T.toString();
 return os;
}

void Triangolo::set_lati(const vector<Vertice>& v){
  lati[0] = std::sqrt((std::pow((v[1].get_X()-v[0].get_X()),2)+std::pow(v[1].get_Y()-v[0].get_Y(),2)));
  lati[1] = std::sqrt((std::pow((v[2].get_X()-v[0].get_X()),2)+std::pow(v[2].get_Y()-v[0].get_Y(),2)));
  lati[2] = std::sqrt((std::pow((v[2].get_X()-v[1].get_X()),2)+std::pow(v[2].get_Y()-v[1].get_Y(),2)));
}

string Triangolo::toString() const{
  string s ="Triangolo: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  s+= " Lati ab:"+to_string_nozero(lati[0])+ ", bc:"+to_string_nozero(lati[1])+ ", ca:"+to_string_nozero(lati[2]);
  return s;
}


