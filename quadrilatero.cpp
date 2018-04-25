#include "quadrilatero.h"


Quadrilatero::Quadrilatero(const Quadrilatero & T):PoligonoConvesso(T){}
Quadrilatero::Quadrilatero(const vector<Vertice>&V):PoligonoConvesso(V){}

double Quadrilatero::get_altezza(const Vertice& V)const{}
unsigned int Quadrilatero::size()const{return 3;}
double Quadrilatero::get_perimetro()const{}
double Quadrilatero::get_area()const{}

std::ostream& operator<< (std::ostream& os,const Quadrilatero& T){
 os<<T.toString();
 return os;
}
string Quadrilatero::toString() const{
  string s ="Quadrilatero: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
      s +="("+it->get_X_string()+","+it->get_Y_string()+") ";
    }
  return s;
}
