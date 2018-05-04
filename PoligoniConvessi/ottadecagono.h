#ifndef OTTADECAGONO_H
#define OTTADECAGONO_H

#include "poligonoconvesso.h"
class Ottadecagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Ottadecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Ottadecagono(const Ottadecagono&);
  Ottadecagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;
  string get_nomeClasse() const;
protected:
  double lati[18];
private:
  void set_lati(const vector<Vertice>&);
  Ottadecagono(const vector<Vertice>&,bool);

};


#endif // OTTADECAGONO_H
