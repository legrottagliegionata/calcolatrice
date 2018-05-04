#ifndef TRIANGOLO_H
#define TRIANGOLO_H
#include "poligonoconvesso.h"
class Triangolo: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Triangolo&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Triangolo(const Triangolo&);
  Triangolo(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;
  string get_nomeClasse() const;
protected:
  double lati[3];

private:
  void set_lati(const vector<Vertice>&);
  Triangolo(const vector<Vertice>&,bool);

};

#endif // TRIANGOLO_H
