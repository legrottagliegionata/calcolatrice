#include "triangolo.h"

Triangolo::Triangolo(const Triangolo & T):PoligonoConvesso(T){}
Triangolo::Triangolo(const vector<Vertice>&V):PoligonoConvesso(V){}

double Triangolo::get_altezza(const Vertice& V)const{}
unsigned int Triangolo::size()const{return 3;}
double Triangolo::get_perimetro()const{}
double Triangolo::get_area()const{}

std::ostream& operator<< (std::ostream& os,const Triangolo& T){

 os<<"Triangolo: ";
 for(auto it=T.Lista.begin();it!=T.Lista.end();it++){
     os<<"("<<it->get_X()<<","<<it->get_Y()<<") ";
   }
 return os;

return os;
}
