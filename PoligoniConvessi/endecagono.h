#ifndef ENDECAGONO_H
#define ENDECAGONO_H

#include "poligonoconvesso.h"
class Endecagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Endecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Endecagono(const Endecagono&);
  Endecagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;
  string get_nomeClasse() const;

protected:
  double lati[11];
private:
  void set_lati(const vector<Vertice>&);
  Endecagono(const vector<Vertice>&,bool);

};

#endif // ENDECAGONO_H
