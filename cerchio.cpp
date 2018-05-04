#include "cerchio.h"

Cerchio::Cerchio(const Vertice& V, double r):Shape(),origine(V),raggio(r){}
Cerchio::Cerchio(const Cerchio& C):Shape(),origine(C.origine),raggio(C.raggio){}
double Cerchio::get_raggio() const{return raggio;}
Vertice Cerchio::get_origine()const{return origine;}
void Cerchio::set_origine(const Vertice& V){origine = V;}
double Cerchio::get_perimetro()const{return 2 * M_PI * raggio;}
double Cerchio::get_area()const{return M_PI* raggio*raggio;}
string Cerchio::toString() const{ return "Cerchio origine: " + origine.toString() + " raggio: " + to_string_nozero(raggio);}

std::ostream& operator<<(std::ostream& os,const Cerchio& c){
        return os<<c.toString();
}

string Cerchio::get_nomeClasse()const{
    return "Cerchio";
}

Cerchio& Cerchio::operator +=(double x){
    raggio+=x;
    return *this;
}
Cerchio operator+(const Cerchio& c,double x){
    return Cerchio(c.get_origine(),c.get_raggio()+x);
}

Cerchio operator-(const Cerchio& c,double x){
    if(c.get_raggio() > x)
        return Cerchio(c.get_origine(),c.get_raggio()-x);
    else{
        throw  std::invalid_argument("Non puoi avere un raggio negativo");
        return c;
    }
}
bool operator==(const Cerchio& c1,const Cerchio& c2){
    return c1.get_origine() == c2.get_origine() && c1.get_raggio() == c2.get_raggio();
}
bool operator<(const Cerchio& c1,const Cerchio& c2){
    return c1.get_raggio() < c2.get_raggio();
}
bool operator>(const Cerchio& c1,const Cerchio& c2){
    return c1.get_raggio() > c2.get_raggio();
}
bool operator<=(const Cerchio& c1,const Cerchio& c2){
    return c1.get_raggio() <= c2.get_raggio();
}
bool operator>=(const Cerchio& c1,const Cerchio& c2){
    return c1.get_raggio() >= c2.get_raggio();
}
Cerchio& Cerchio::operator =(const Cerchio& c){
    origine=c.origine;
    raggio=c.raggio;
    return *this;
}

