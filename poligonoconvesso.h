#ifndef POLIGONOCONVESSO_H
#define POLIGONOCONVESSO_H

#include "shape.h"
#include <stdexcept>
#include <algorithm>
using std::vector;
class PoligonoConvesso : public Shape
{
public:
  PoligonoConvesso(const PoligonoConvesso&);
  PoligonoConvesso(const std::vector<Vertice>&);
  virtual unsigned int size() const;
  virtual double get_perimetro() const =0;
  virtual double get_area() const =0;

  Shape* aggiungi_vertice(const Vertice&);

protected:
  virtual string toString() const =0;
  std::vector<Vertice> Lista;

};

vector<Vertice> grahamScan(vector<Vertice>&);
bool POLAR_ORDER(Vertice a, Vertice b);
int sqrDist(Vertice a, Vertice b);
int ccw(Vertice a, Vertice b, Vertice c);

Shape* crea_poligono(vector<Vertice>& V);
#endif // POLIGONOCONVESSO_H
