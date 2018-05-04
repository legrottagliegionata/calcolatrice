#ifndef TETRADECAGONO_H
#define TETRADECAGONO_H


#include "poligonoconvesso.h"
class Tetradecagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Tetradecagono&);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(PoligonoConvesso*);
  friend  PoligonoConvesso* PoligonoConvesso::crea_poligono(vector<Vertice>&);

public:
  Tetradecagono(const Tetradecagono&);
  Tetradecagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[14];
private:
  void set_lati(const vector<Vertice>&);
  Tetradecagono(const vector<Vertice>&,bool);

};


#endif // TETRADECAGONO_H
