#include "Poligono.h"
unsigned int Poligono::n_poligoni=0;

//Costruttori
Poligono::Poligono():id(n_poligoni++){}

Poligono::Poligono(const std::vector<Vertice>& V):id(++n_poligoni),Lista(V){}

Poligono::Poligono(const Poligono& P):id(++n_poligoni),Lista(P.Lista){}


/* ------------------- */

unsigned int Poligono::size() const{return Lista.size();}
