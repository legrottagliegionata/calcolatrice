#ifndef QUADRILATERO_H
#define QUADRILATERO_H
#define _USE_MATH_DEFINES
#include "./poligonoconvesso.h"
class Quadrilatero: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Quadrilatero&);
public:
  Quadrilatero(const Quadrilatero&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  Quadrilatero(const vector<Vertice>&);
  virtual string toString() const;

protected:
  double lati[4];
private:
  void set_lati(const vector<Vertice>&);
};


#endif // QUADRILATERO_H
