#include "quadrilatero.h"
Quadrilatero::Quadrilatero(const Quadrilatero & T):PoligonoConvesso(T){set_lati(T.Lista);}

Quadrilatero::Quadrilatero(const vector<Vertice>&V):PoligonoConvesso(V,4,"Quadrilatero"){
  set_lati(V);
}

//double Quadrilatero::get_altezza(const Vertice& V)const{}
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
  string s ="Quadrilatero: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  return s;
}

void Quadrilatero::set_lati(const vector<Vertice>& v){
  unsigned int x=0,y=1;
  while(x<v.size()){
      if(y==v.size())y=0;
      lati[x] = std::sqrt((std::pow((v[y].get_X()-v[x].get_X()),2)+std::pow(v[y].get_Y()-v[x].get_Y(),2)));
      x++; y++;
    }
}
