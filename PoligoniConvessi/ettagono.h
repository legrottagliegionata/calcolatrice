#ifndef ETTAGONO_H
#define ETTAGONO_H

#include "poligonoconvesso.h"
class Ettagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Ettagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Ettagono(const Ettagono&);
  Ettagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;
  string get_nomeClasse() const;
protected:
  double lati[7];
private:
  void set_lati(const vector<Vertice>&);
  Ettagono(const vector<Vertice>&,bool);

};
#endif // ETTAGONO_H
