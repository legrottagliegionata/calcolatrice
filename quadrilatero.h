#ifndef QUADRILATERO_H
#define QUADRILATERO_H

#include "poligonoconvesso.h"
class Quadrilatero: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Quadrilatero&);
  friend Shape* crea_poligono(vector<Vertice>&);
public:
  Quadrilatero(const Quadrilatero&);


  //virtual double get_altezza(const Vertice&)const;
  virtual unsigned int size() const;
  virtual double get_perimetro() const;
  virtual double get_area() const;
protected:
  virtual string toString() const;
  Quadrilatero(const vector<Vertice>&);
  double lati[4];
private:
  void set_lati(const vector<Vertice>&);
};


#endif // QUADRILATERO_H
