#ifndef DECAGONO_H
#define DECAGONO_H

#include "poligonoconvesso.h"
class Decagono: public PoligonoConvesso
{
  friend ostream& operator<< (ostream&,const Decagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(QVector<Vertice>&);

public:
  Decagono(const Decagono&);
  Decagono(const QVector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual QString toString() const;
  QString get_nomeClasse() const;

protected:
  double lati[10];
private:
  void set_lati(const QVector<Vertice>&);
  Decagono(const QVector<Vertice>&,bool);

};
#endif // DECAGONO_H
