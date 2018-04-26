#include "punto.h"

Punto::Punto(double a,double b):x(a),y(b){}
Punto::Punto(const Punto& p):x(p.x),y(p.y){}

double Punto:: get_X()const{return x;}
double Punto:: get_Y()const{return y;}

//overraiding operatori
bool Punto::operator==(const Punto& p)const{	return x == p.x && y == p.y;}
bool Punto::operator!=(const Punto& p)const{	return x != p.x || y != p.y;}
bool Punto::operator<(const Punto& p)const{
  if (y != p.y)
      return y < p.y;
  return x < p.x;
}
std::string Punto::toString()const{
  return std::string("(" + to_string_nozero(x) + "," + to_string_nozero(y)+ ")");
}
double distanza(const Punto& p1, const Punto& p2)
{
    const double dX = ((p1.get_X()-p2.get_X())*(p1.get_X()-p2.get_X()));
    const double dY = ((p1.get_Y()-p2.get_Y())*(p1.get_Y()-p2.get_Y()));
    return sqrt( dX + dY );
}

std::ostream& operator<<(std::ostream& os,Punto& p){
        return os<<"("<<p.get_X()<<","<<p.get_Y()<<")";
}
