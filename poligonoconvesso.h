#ifndef POLIGONOCONVESSO_H
#define POLIGONOCONVESSO_H

#include "shape.h"
#include <stdexcept>
#include <algorithm>
using std::vector;

class PoligonoConvesso : public Shape
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

vector<Vertice> grahamScan(vector<Vertice>&);
bool POLAR_ORDER(Vertice, Vertice);
int sqrDist(Vertice, Vertice);
int ccw(Vertice, Vertice, Vertice);
PoligonoConvesso* crea_poligono(PoligonoConvesso*);
PoligonoConvesso* crea_poligono(const vector<Vertice>&);
#endif // POLIGONOCONVESSO_H
