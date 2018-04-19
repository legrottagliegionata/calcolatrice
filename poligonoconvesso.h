#ifndef POLIGONOCONVESSO_H
#define POLIGONOCONVESSO_H

#include "poligono.h"
#include <stack>
#include <algorithm>
using std::vector;
class PoligonoConvesso : public Poligono
{
public:
  PoligonoConvesso();
  PoligonoConvesso(const PoligonoConvesso&);
  PoligonoConvesso(const std::vector<Vertice>&);
  virtual double get_perimetro() const =0;
  virtual double get_area() const =0;
};

vector<Vertice> grahamScan(vector<Vertice>& Points);
bool POLAR_ORDER(Vertice a, Vertice b);
int sqrDist(Vertice a, Vertice b);
int ccw(Vertice a, Vertice b, Vertice c);
#endif // POLIGONOCONVESSO_H
