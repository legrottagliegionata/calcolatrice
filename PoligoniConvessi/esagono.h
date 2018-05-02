#ifndef Esagono_H
#define Esagono_H

#include "poligonoconvesso.h"
class Esagono: public PoligonoConvesso
{
  friend ostream& operator<< (ostream&,const Esagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(QVector<Vertice>&);

public:
  Esagono(const Esagono&);
  Esagono(const QVector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual QString toString() const;
  QString get_nomeClasse() const;
protected:
  double lati[6];
private:
  void set_lati(const QVector<Vertice>&);
  Esagono(const QVector<Vertice>&,bool);

};
#endif // Esagono_H
