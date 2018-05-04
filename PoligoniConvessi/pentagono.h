#ifndef PENTAGONO_H
#define PENTAGONO_H

#include "poligonoconvesso.h"
class Pentagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Pentagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Pentagono(const Pentagono&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  Pentagono(const vector<Vertice>&);
  virtual string toString() const;
  string get_nomeClasse() const;
protected:
  double lati[5];
private:
  void set_lati(const vector<Vertice>&);
  Pentagono(const vector<Vertice>&,bool);


};


#endif // PENTAGONO_H
