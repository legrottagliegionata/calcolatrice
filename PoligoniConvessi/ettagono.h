#ifndef ETTAGONO_H
#define ETTAGONO_H

#include "./poligonoconvesso.h"
class Ettagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Ettagono&);

public:
  Ettagono(const Ettagono&);
  Ettagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[7];
private:
  void set_lati(const vector<Vertice>&);
};
#endif // ETTAGONO_H
