#include "pentagono.h"

Pentagono::Pentagono(const Pentagono & T):PoligonoConvesso(T){set_lati(T.Lista);}


Pentagono::Pentagono(const vector<Vertice>&V):PoligonoConvesso(V,5,"Pentagono"){
      set_lati(V);
}
Pentagono::Pentagono(const vector<Vertice>&V,bool b):PoligonoConvesso(V,5,"Pentagono",b){
      set_lati(V);
}

double Pentagono::get_perimetro()const{
  return lati[0]+lati[1]+lati[2]+lati[3]+lati[4];
}

double Pentagono::get_area()const{
  //semiperimetro
  return 0;
}

std::ostream& operator<< (std::ostream& os,const Pentagono& T){
 os<<T.toString();
 return os;
}

void Pentagono::set_lati(const vector<Vertice>& v){
  unsigned int x=0,y=1;
  while(x<v.size()){
      if(y==v.size())y=0;
      lati[x] = std::sqrt((std::pow((v[y].get_X()-v[x].get_X()),2)+std::pow(v[y].get_Y()-v[x].get_Y(),2)));
      x++; y++;
    }
}

string Pentagono::toString() const{
  string s ="Pentagono: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }

  return s;
}

