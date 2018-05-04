#ifndef DECAGONO_H
#define DECAGONO_H

#include "poligonoconvesso.h"
class Decagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Decagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Decagono(const Decagono&);
  Decagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[10];
private:
  void set_lati(const vector<Vertice>&);
  Decagono(const vector<Vertice>&,bool);

};
#endif // DECAGONO_H
