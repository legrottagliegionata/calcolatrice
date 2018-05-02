#ifndef ENNAGONO_H
#define ENNAGONO_H

#include "poligonoconvesso.h"
class Ennagono: public PoligonoConvesso
{
  friend ostream& operator<< (ostream&,const Ennagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(QVector<Vertice>&);

public:
  Ennagono(const Ennagono&);
  Ennagono(const QVector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual QString toString() const;
  QString get_nomeClasse() const;

protected:
  double lati[9];
private:
  void set_lati(const QVector<Vertice>&);
  Ennagono(const QVector<Vertice>&,bool);

};
#endif // ENNAGONO_H
