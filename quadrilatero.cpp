#include "quadrilatero.h"
Quadrilatero::Quadrilatero(const Quadrilatero & T):PoligonoConvesso(T){set_lati(T.Lista);}

Quadrilatero::Quadrilatero(const vector<Vertice>&V):PoligonoConvesso(V,4,"Quadrilatero"){
  set_lati(V);
}

//double Quadrilatero::get_altezza(const Vertice& V)const{}
unsigned int Quadrilatero::size()const{return 3;}
double Quadrilatero::get_perimetro()const{
  return lati[0]+lati[1]+lati[2]+lati[3];
}
double Quadrilatero::get_area()const{
  double A,C;
  A = get_Angolo(Lista[0],Lista[3],Lista[1]);
  C = get_Angolo(Lista[2],Lista[1],Lista[3]);
  std::cout<<"A: "<<A<<std::endl;
  std::cout<<"C: "<<C<<std::endl;
  return ((lati[3]*lati[0])/2)*std::sin(A* (M_PI / 180.0)) + ((lati[1]*lati[2])/2)*std::sin(C* (M_PI / 180.0));

}

std::ostream& operator<< (std::ostream& os,const Quadrilatero& T){
 os<<T.toString();
 return os;
}
string Quadrilatero::toString() const{
  string s ="{ Quadrilatero: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  s+= " Lati ab:"+to_string_nozero(lati[0])+ ", bc:"+to_string_nozero(lati[1])+ ", cd:"+to_string_nozero(lati[2])+ ", da:"+to_string_nozero(lati[3])+ "}";
  return s;
}

void Quadrilatero::set_lati(const vector<Vertice>& v){
  lati[0] = std::sqrt((std::pow((v[1].get_X()-v[0].get_X()),2)+std::pow(v[1].get_Y()-v[0].get_Y(),2)));
  lati[1] = std::sqrt((std::pow((v[2].get_X()-v[1].get_X()),2)+std::pow(v[2].get_Y()-v[1].get_Y(),2)));
  lati[2] = std::sqrt((std::pow((v[3].get_X()-v[2].get_X()),2)+std::pow(v[3].get_Y()-v[2].get_Y(),2)));
  lati[3] = std::sqrt((std::pow((v[0].get_X()-v[3].get_X()),2)+std::pow(v[0].get_Y()-v[3].get_Y(),2)));
}
