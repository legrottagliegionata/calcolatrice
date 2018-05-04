#include "ennagono.h"

#include "triangolo.h"

Ennagono::Ennagono(const Ennagono & T):PoligonoConvesso(T){set_lati(T.Lista);}


Ennagono::Ennagono(const vector<Vertice>&V):PoligonoConvesso(V,9,"Ennagono"){
      set_lati(V);
}
Ennagono::Ennagono(const vector<Vertice>&V,bool b):PoligonoConvesso(V,9,"Ennagono",b){
      set_lati(V);
}
double Ennagono::get_perimetro()const{
  return lati[0]+lati[1]+lati[2]+lati[3]+lati[4]+lati[5]+lati[6]+lati[7]+lati[8];
}

double Ennagono::get_area()const{
  unsigned int a=0,b=1, c=2;
  double area=0;
  while(c < Lista.size()){
      area+= Triangolo({Lista[a], Lista[b], Lista[c]}).get_area();
      c++;b++;
    }
  return area;
}

std::ostream& operator<< (std::ostream& os,const Ennagono& T){
 os<<T.toString();
 return os;
}

void Ennagono::set_lati(const vector<Vertice>& v){
  unsigned int x=0,y=1;
  while(x<v.size()){
      if(y==v.size())y=0;
      lati[x] = std::sqrt((std::pow((v[y].get_X()-v[x].get_X()),2)+std::pow(v[y].get_Y()-v[x].get_Y(),2)));
      x++; y++;
    }
}

string Ennagono::toString() const{
  string s ="Ennagono: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  return s;
}
string Ennagono::get_nomeClasse()const{
    return "Ennagono";
}
