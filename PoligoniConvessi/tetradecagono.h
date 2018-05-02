#ifndef TETRADECAGONO_H
#define TETRADECAGONO_H

#include "poligonoconvesso.h"
class Tetradecagono: public PoligonoConvesso
{
  friend ostream& operator<< (ostream&,const Tetradecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(QVector<Vertice>&);

public:
  Tetradecagono(const Tetradecagono&);
  Tetradecagono(const QVector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual QString toString() const;
  QString get_nomeClasse() const;
protected:
  double lati[14];
private:
  void set_lati(const QVector<Vertice>&);
  Tetradecagono(const QVector<Vertice>&,bool);

};


#endif // TETRADECAGONO_H
