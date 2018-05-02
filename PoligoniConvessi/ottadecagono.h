#ifndef OTTADECAGONO_H
#define OTTADECAGONO_H

#include "poligonoconvesso.h"
class Ottadecagono: public PoligonoConvesso
{
  friend ostream& operator<< (ostream&,const Ottadecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(QVector<Vertice>&);

public:
  Ottadecagono(const Ottadecagono&);
  Ottadecagono(const QVector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual QString toString() const;
  QString get_nomeClasse() const;
protected:
  double lati[18];
private:
  void set_lati(const QVector<Vertice>&);
  Ottadecagono(const QVector<Vertice>&,bool);

};


#endif // OTTADECAGONO_H
