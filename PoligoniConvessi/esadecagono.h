#ifndef ESADECAGONO_H
#define ESADECAGONO_H

#include "poligonoconvesso.h"
class Esadecagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Esadecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Esadecagono(const Esadecagono&);
  Esadecagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;
  string get_nomeClasse() const;
protected:
  double lati[16];
private:
  void set_lati(const vector<Vertice>&);
  Esadecagono(const vector<Vertice>&,bool);

};

#endif // ESADECAGONO_H
