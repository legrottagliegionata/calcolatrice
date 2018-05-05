#include "eptadecagono.h"
#include "triangolo.h"

Eptadecagono::Eptadecagono(const Eptadecagono & T):PoligonoConvesso(T){set_lati(T.Lista);}


Eptadecagono::Eptadecagono(const vector<Vertice>&V):PoligonoConvesso(V,17,"Eptadecagono"){
      set_lati(V);
}
Eptadecagono::Eptadecagono(const vector<Vertice>&V,bool b):PoligonoConvesso(V,17,"Eptadecagono",b){
      set_lati(V);
}
double Eptadecagono::get_perimetro()const{
  return lati[0]+lati[1]+lati[2]+lati[3]+lati[4]+lati[5]+lati[6]+lati[7]+lati[8]+lati[9]+lati[10]+lati[11]+lati[12]+lati[13]+lati[14]+lati[15]+lati[16];
}

double Eptadecagono::get_area()const{
  unsigned int a=0,b=1, c=2;
  double area=0;
  while(c < Lista.size()){
      area+= Triangolo({Lista[a], Lista[b], Lista[c]}).get_area();
      c++;b++;
    }
  return area;
}

std::ostream& operator<< (std::ostream& os,const Eptadecagono& T){
 os<<T.toString();
 return os;
}

void Eptadecagono::set_lati(const vector<Vertice>& v){
  unsigned int x=0,y=1;
  while(x<v.size()){
      if(y==v.size())y=0;
      lati[x] = std::sqrt((std::pow((v[y].get_X()-v[x].get_X()),2)+std::pow(v[y].get_Y()-v[x].get_Y(),2)));
      x++; y++;
    }
}

string Eptadecagono::toString() const{
  string s ="Eptadecagono: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  return s;
}
string Eptadecagono::get_nomeClasse()const{
    return "Eptadecagono";
}