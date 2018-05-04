#include "endecagono.h"

#include "triangolo.h"

Endecagono::Endecagono(const Endecagono & T):PoligonoConvesso(T){set_lati(T.Lista);}


Endecagono::Endecagono(const vector<Vertice>&V):PoligonoConvesso(V,11,"Endecagono"){
      set_lati(V);
}
Endecagono::Endecagono(const vector<Vertice>&V,bool b):PoligonoConvesso(V,11,"Endecagono",b){
      set_lati(V);
}
double Endecagono::get_perimetro()const{
  return lati[0]+lati[1]+lati[2]+lati[3]+lati[4]+lati[5]+lati[6]+lati[7]+lati[8]+lati[9]+lati[10];
}

double Endecagono::get_area()const{
  unsigned int a=0,b=1, c=2;
  double area=0;
  while(c < Lista.size()){
      area+= Triangolo({Lista[a], Lista[b], Lista[c]}).get_area();
      c++;b++;
    }
  return area;
}

std::ostream& operator<< (std::ostream& os,const Endecagono& T){
 os<<T.toString();
 return os;
}

void Endecagono::set_lati(const vector<Vertice>& v){
  unsigned int x=0,y=1;
  while(x<v.size()){
      if(y==v.size())y=0;
      lati[x] = std::sqrt((std::pow((v[y].get_X()-v[x].get_X()),2)+std::pow(v[y].get_Y()-v[x].get_Y(),2)));
      x++; y++;
    }
}

string Endecagono::toString() const{
  string s ="Endecagono: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  return s;
}
