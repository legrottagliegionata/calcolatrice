#ifndef PENTADECAGONO_H
#define PENTADECAGONO_H

#include "poligonoconvesso.h"
class Pentadecagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Pentadecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Pentadecagono(const Pentadecagono&);
  Pentadecagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[15];
private:
  void set_lati(const vector<Vertice>&);
  Pentadecagono(const vector<Vertice>&,bool);

};


#endif // PENTADECAGONO_H
