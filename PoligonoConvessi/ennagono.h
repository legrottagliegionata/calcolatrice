#ifndef ENNAGONO_H
#define ENNAGONO_H

#include "./poligonoconvesso.h"
class Ennagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Ennagono&);

public:
  Ennagono(const Ennagono&);
  Ennagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[9];
private:
  void set_lati(const vector<Vertice>&);
};
#endif // ENNAGONO_H
