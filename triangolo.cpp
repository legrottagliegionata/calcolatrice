#include "triangolo.h"

Triangolo::Triangolo(const Triangolo & T):PoligonoConvesso(T){}
Triangolo::Triangolo(const vector<Vertice>&V):PoligonoConvesso(V){}

double Triangolo::get_altezza(const Vertice& V)const{}
unsigned int Triangolo::size()const{return 3;}
double Triangolo::get_perimetro()const{}
double Triangolo::get_area()const{}

std::ostream& operator<< (std::ostream& os,const Triangolo& T){
 os<<T.toString();
 return os;
}
string Triangolo::toString() const{
  string s ="Triangolo: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
      s +="("+it->get_X_string()+","+it->get_Y_string()+") ";
    }
  return s;
}
