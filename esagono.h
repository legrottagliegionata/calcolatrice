#ifndef ESAGONO_H
#define ESAGONO_H

#include "poligonoconvesso.h"
class Esagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Esagono&);

public:
  Esagono(const Esagono&);
  Esagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[6];
private:
  void set_lati(const vector<Vertice>&);
};
#endif // ESAGONO_H
