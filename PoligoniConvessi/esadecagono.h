#ifndef ESADECAGONO_H
#define ESADECAGONO_H

#include "poligonoconvesso.h"
class Esadecagono: public PoligonoConvesso
{
  friend ostream& operator<< (ostream&,const Esadecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(QVector<Vertice>&);

public:
  Esadecagono(const Esadecagono&);
  Esadecagono(const QVector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual QString toString() const;
  QString get_nomeClasse() const;
protected:
  double lati[16];
private:
  void set_lati(const QVector<Vertice>&);
  Esadecagono(const QVector<Vertice>&,bool);

};

#endif // ESADECAGONO_H
