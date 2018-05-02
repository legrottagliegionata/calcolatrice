#ifndef EPTADECAGONO_H
#define EPTADECAGONO_H

#include "poligonoconvesso.h"
class Eptadecagono: public PoligonoConvesso
{
  friend ostream& operator<< (ostream&,const Eptadecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(QVector<Vertice>&);

public:
  Eptadecagono(const Eptadecagono&);
  Eptadecagono(const QVector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual QString toString() const;
  QString get_nomeClasse() const;
protected:
  double lati[17];
private:
  void set_lati(const QVector<Vertice>&);
  Eptadecagono(const QVector<Vertice>&,bool);

};


#endif // EPTADECAGONO_H
