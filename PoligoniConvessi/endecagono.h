#ifndef ENDECAGONO_H
#define ENDECAGONO_H

#include "poligonoconvesso.h"
class Endecagono: public PoligonoConvesso
{
  friend ostream& operator<< (ostream&,const Endecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(QVector<Vertice>&);

public:
  Endecagono(const Endecagono&);
  Endecagono(const QVector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual QString toString() const;
  QString get_nomeClasse() const;

protected:
  double lati[11];
private:
  void set_lati(const QVector<Vertice>&);
  Endecagono(const QVector<Vertice>&,bool);

};

#endif // ENDECAGONO_H
