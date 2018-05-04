#ifndef ENNAGONO_H
#define ENNAGONO_H

#include "poligonoconvesso.h"
class Ennagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Ennagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Ennagono(const Ennagono&);
  Ennagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;
  string get_nomeClasse() const;

protected:
  double lati[9];
private:
  void set_lati(const vector<Vertice>&);
  Ennagono(const vector<Vertice>&,bool);

};
#endif // ENNAGONO_H
