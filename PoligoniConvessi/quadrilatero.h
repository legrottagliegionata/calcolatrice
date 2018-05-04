#ifndef QUADRILATERO_H
#define QUADRILATERO_H
#define _USE_MATH_DEFINES
#include "poligonoconvesso.h"
class Quadrilatero: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Quadrilatero&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);
public:
  Quadrilatero(const Quadrilatero&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  Quadrilatero(const vector<Vertice>&);
  virtual string toString() const;

protected:
  double lati[4];
private:
  void set_lati(const vector<Vertice>&);
  Quadrilatero(const vector<Vertice>&,bool);

};


#endif // QUADRILATERO_H
