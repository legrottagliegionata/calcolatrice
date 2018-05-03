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


