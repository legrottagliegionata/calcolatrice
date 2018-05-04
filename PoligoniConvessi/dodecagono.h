#ifndef DODECAGONO_H
#define DODECAGONO_H


#include "poligonoconvesso.h"
class Dodecagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Dodecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Dodecagono(const Dodecagono&);
  Dodecagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;
  string get_nomeClasse() const;

protected:
  double lati[12];
private:
  void set_lati(const vector<Vertice>&);
    Dodecagono(const vector<Vertice>&,bool);
};
#endif // DODECAGONO_H
