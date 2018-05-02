#include "ettagono.h"
#include "triangolo.h"

Ettagono::Ettagono(const Ettagono & T):PoligonoConvesso(T){set_lati(T.Lista);}


Ettagono::Ettagono(const vector<Vertice>&V):PoligonoConvesso(V,7,"Ettagono"){
      set_lati(V);
}

double Ettagono::get_perimetro()const{
  return lati[0]+lati[1]+lati[2]+lati[3]+lati[4]+lati[5]+lati[6];
}

double Ettagono::get_area()const{
  unsigned int a=0,b=1, c=2;
  double area=0;
  while(c < Lista.size()){
      area+= Triangolo({Lista[a], Lista[b], Lista[c]}).get_area();
      c++;b++;
    }
  return area;
}

std::ostream& operator<< (std::ostream& os,const Ettagono& T){
 os<<T.toString();
 return os;
}

void Ettagono::set_lati(const vector<Vertice>& v){
  unsigned int x=0,y=1;
  while(x<v.size()){
      if(y==v.size())y=0;
      lati[x] = std::sqrt((std::pow((v[y].get_X()-v[x].get_X()),2)+std::pow(v[y].get_Y()-v[x].get_Y(),2)));
      x++; y++;
    }
}

string Ettagono::toString() const{
  string s ="Ettagono: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  return s;
}
