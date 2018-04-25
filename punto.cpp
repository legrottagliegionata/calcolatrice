#include "punto.h"

Punto::Punto(double a,double b):x(a),y(b){}
Punto::Punto(const Punto& p):x(p.x),y(p.y){}

double Punto:: get_X()const{return x;}
double Punto:: get_Y()const{return y;}

string Punto:: get_X_string()const{
  return remove_zeros(x);
}
string Punto:: get_Y_string()const{
  return remove_zeros(y);
}
string remove_zeros(double S){
  string s= std::to_string(S);
  int i=s.size()-1;
  bool out=false;
  while(s[i] != '.' && !out){
      if(s[i] == '0'){
        s.erase(s.size()-1,1);
        i--;
        }
      else
        out=true;
    }
  if(s[i]=='.') s.erase(s.size()-1,1);
  return s;
}

//overraiding operatori
bool Punto::operator==(const Punto& p)const{	return x == p.x && y == p.y;}
bool Punto::operator!=(const Punto& p)const{	return x != p.x || y != p.y;}
bool Punto::operator<(const Punto& p)const{
  if (y != p.y)
      return y < p.y;
  return x < p.x;
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
