#ifndef Esagono_H
#define Esagono_H

#include "poligonoconvesso.h"
class Esagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Esagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Esagono(const Esagono&);
  Esagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;
  string get_nomeClasse() const;
protected:
  double lati[6];
private:
  void set_lati(const vector<Vertice>&);
  Esagono(const vector<Vertice>&,bool);

};
#endif // Esagono_H
