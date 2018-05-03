#ifndef ICOSAGONO_H
#define ICOSAGONO_H

#include "./poligonoconvesso.h"
class Icosagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Icosagono&);

public:
  Icosagono(const Icosagono&);
  Icosagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[20];
private:
  void set_lati(const vector<Vertice>&);
};

#endif // ICOSAGONO_H
