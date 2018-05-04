#include "triangolo.h"

Triangolo::Triangolo(const Triangolo & T):PoligonoConvesso(T){set_lati(T.Lista);}


Triangolo::Triangolo(const vector<Vertice>&V):PoligonoConvesso(V,3,"Triangolo"){
      set_lati(V);
}

Triangolo::Triangolo(const vector<Vertice>&V,bool b):PoligonoConvesso(V,3,"Triangolo",b){
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
  unsigned int x=0,y=1;
  while(x<v.size()){
      if(y==v.size())y=0;
      lati[x] = std::sqrt((std::pow((v[y].get_X()-v[x].get_X()),2)+std::pow(v[y].get_Y()-v[x].get_Y(),2)));
      x++; y++;
    }
}

string Triangolo::toString() const{
  string s ="Triangolo: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  return s;
}

string Triangolo::get_nomeClasse()const{
    return "Triangolo";
}


