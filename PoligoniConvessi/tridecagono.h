#ifndef TRIDECAGONO_H
#define TRIDECAGONO_H

#include "poligonoconvesso.h"
class Tridecagono: public PoligonoConvesso
{
  friend ostream& operator<< (ostream&,const Tridecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(QVector<Vertice>&);

public:
  Tridecagono(const Tridecagono&);
  Tridecagono(const QVector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual QString toString() const;
  QString get_nomeClasse() const;
protected:
  double lati[13];
private:
  void set_lati(const QVector<Vertice>&);
  Tridecagono(const QVector<Vertice>&,bool);

};

#endif // TRIDECAGONO_H
