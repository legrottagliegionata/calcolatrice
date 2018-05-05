#include "ennadecagono.h"

#include "triangolo.h"

Ennadecagono::Ennadecagono(const Ennadecagono & T):PoligonoConvesso(T){set_lati(T.Lista);}


Ennadecagono::Ennadecagono(const vector<Vertice>&V):PoligonoConvesso(V,19,"Ennadecagono"){
      set_lati(V);
}
Ennadecagono::Ennadecagono(const vector<Vertice>&V,bool b):PoligonoConvesso(V,19,"Ennadecagono",b){
      set_lati(V);
}
double Ennadecagono::get_perimetro()const{
  return lati[0]+lati[1]+lati[2]+lati[3]+lati[4]+lati[5]+lati[6]+lati[7]+lati[8]+lati[9]+lati[10]+lati[11]+lati[12]+lati[13]+lati[14]+lati[15]+lati[16]+lati[17]+lati[18];
}

double Ennadecagono::get_area()const{
  unsigned int a=0,b=1, c=2;
  double area=0;
  while(c < Lista.size()){
      area+= Triangolo({Lista[a], Lista[b], Lista[c]}).get_area();
      c++;b++;
    }
  return area;
}

std::ostream& operator<< (std::ostream& os,const Ennadecagono& T){
 os<<T.toString();
 return os;
}

void Ennadecagono::set_lati(const vector<Vertice>& v){
  unsigned int x=0,y=1;
  while(x<v.size()){
      if(y==v.size())y=0;
      lati[x] = std::sqrt((std::pow((v[y].get_X()-v[x].get_X()),2)+std::pow(v[y].get_Y()-v[x].get_Y(),2)));
      x++; y++;
    }
}

string Ennadecagono::toString() const{
  string s ="Ennadecagono: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  return s;
}
string Ennadecagono::get_nomeClasse()const{
    return "Ennadecagono";
}