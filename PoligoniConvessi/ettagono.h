#ifndef ETTAGONO_H
#define ETTAGONO_H

#include "poligonoconvesso.h"
class Ettagono: public PoligonoConvesso
{
  friend ostream& operator<< (ostream&,const Ettagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(QVector<Vertice>&);

public:
  Ettagono(const Ettagono&);
  Ettagono(const QVector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual QString toString() const;
  QString get_nomeClasse() const;
protected:
  double lati[7];
private:
  void set_lati(const QVector<Vertice>&);
  Ettagono(const QVector<Vertice>&,bool);

};
#endif // ETTAGONO_H
