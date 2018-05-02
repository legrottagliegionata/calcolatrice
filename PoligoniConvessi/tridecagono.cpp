#include "tridecagono.h"

#include "triangolo.h"

Tridecagono::Tridecagono(const Tridecagono & T):PoligonoConvesso(T){set_lati(T.Lista);}


Tridecagono::Tridecagono(const QVector<Vertice>&V):PoligonoConvesso(V,13,"Tridecagono"){
      set_lati(V);
}
Tridecagono::Tridecagono(const QVector<Vertice>&V,bool b):PoligonoConvesso(V,13,"Tridecagono",b){
      set_lati(V);
}
double Tridecagono::get_perimetro()const{
  return lati[0]+lati[1]+lati[2]+lati[3]+lati[4]+lati[5]+lati[6]+lati[7]+lati[8]+lati[9]+lati[10]+lati[11]+lati[12];
}

double Tridecagono::get_area()const{
  int a=0,b=1, c=2;
  double area=0;
  while(c < Lista.size()){
      area+= Triangolo({Lista[a], Lista[b], Lista[c]}).get_area();
      c++;b++;
    }
  return area;
}

ostream& operator<< (ostream& os,const Tridecagono& T){
 os<<T.toString().toUtf8().constData();
 return os;
}

void Tridecagono::set_lati(const QVector<Vertice>& v){
  int x=0,y=1;
  while(x<v.size()){
      if(y==v.size())y=0;
      lati[x] = std::sqrt((std::pow((v[y].get_X()-v[x].get_X()),2)+std::pow(v[y].get_Y()-v[x].get_Y(),2)));
      x++; y++;
    }
}

QString Tridecagono::toString() const{
  QString s ="Tridecagono: ";
  for(auto it=Lista.begin();it!=Lista.end();it++){
    s+= it->toString();
    }
  return s;
}
QString Tridecagono::get_nomeClasse()const{
    return "Tridecagono";
}
