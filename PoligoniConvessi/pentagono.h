#ifndef PENTAGONO_H
#define PENTAGONO_H

#include "poligonoconvesso.h"
class Pentagono: public PoligonoConvesso
{
  friend ostream& operator<< (ostream&,const Pentagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(QVector<Vertice>&);

public:
  Pentagono(const Pentagono&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  Pentagono(const QVector<Vertice>&);
  virtual QString toString() const;
  QString get_nomeClasse() const;
protected:
  double lati[5];
private:
  void set_lati(const QVector<Vertice>&);
  Pentagono(const QVector<Vertice>&,bool);


};


#endif // PENTAGONO_H
