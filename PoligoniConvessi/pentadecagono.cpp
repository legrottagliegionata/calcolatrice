#include "pentadecagono.h"

#include "triangolo.h"

Pentadecagono::Pentadecagono(const Pentadecagono & T):PoligonoConvesso(T){set_lati(T.Lista);}


Pentadecagono::Pentadecagono(const vector<Vertice>&V):PoligonoConvesso(V,15,"Pentadecagono"){
      set_lati(V);
}
Pentadecagono::Pentadecagono(const vector<Vertice>&V,bool b):PoligonoConvesso(V,15,"Pentadecagono",b){
      set_lati(V);
}
double Pentadecagono::get_perimetro()const{
  return lati[0]+lati[1]+lati[2]+lati[3]+lati[4]+lati[5]+lati[6]+lati[7]+lati[8]+lati[9]+lati[10]+lati[11]+lati[12]+lati[13]+lati[14];
}

double Pentadecagono::get_area()const{
  unsigned int a=0,b=1, c=2;
  double area=0;
  while(c < Lista.size()){
      area+= Triangolo({Lista[a], Lista[b], Lista[c]}).get_area();
      c++;b++;
    }
  return area;
}

std::ostream& operator<< (std::ostream& os,const Pentadecagono& T){
 os<<T.toString();
 return os;
}

void Pentadecagono::set_lati(const vector<Vertice>& v){
  unsigned int x=0,y=1;
  while(x<v.size()){
      if(y==v.size())y=0;
      lati[x] = std::sqrt((std::pow((v[y].get_X()-v[x].get_X()),2)+std::pow(v[y].get_Y()-v[x].get_Y(),2)));
      x++; y++;
    }
}

string Pentadecagono::toString() const{
  string s ="Pentadecagono: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  return s;
}
string Pentadecagono::get_nomeClasse()const{
    return "Pentadecagono";
}