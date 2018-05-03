#ifndef POLIGONOCONVESSO_H
#define POLIGONOCONVESSO_H

#include "poligono.h"
#include <stdexcept>
#include <algorithm>


using std::vector;

class PoligonoConvesso : public Poligono
{
public:
  PoligonoConvesso();
  PoligonoConvesso(const PoligonoConvesso&);
  PoligonoConvesso(const std::vector<Vertice>&,unsigned int,string);
  vector<Vertice> get_vertici()const;

  virtual unsigned int size() const;
  virtual double get_perimetro() const =0;
  virtual double get_area() const =0;
  PoligonoConvesso* aggiungi_vertice(const Vertice&);
  PoligonoConvesso* rimuovi_vertice(const Vertice&);

protected:
  virtual void set_lati(const vector<Vertice>&) =0;
  std::vector<Vertice> Lista;


};
PoligonoConvesso* operator+(const PoligonoConvesso&,const PoligonoConvesso&);
PoligonoConvesso* operator-(const PoligonoConvesso&,const PoligonoConvesso&);
vector<Vertice> grahamScan(vector<Vertice>&);
bool POLAR_ORDER(Vertice, Vertice);
double sqrDist(Vertice, Vertice);
double ccw(Vertice, Vertice, Vertice);
PoligonoConvesso* crea_poligono(PoligonoConvesso*);
PoligonoConvesso* crea_poligono(vector<Vertice>&);
#endif // POLIGONOCONVESSO_H
