#ifndef OTTAGONO_H
#define OTTAGONO_H

#include "./poligonoconvesso.h"
class Ottagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Ottagono&);

public:
  Ottagono(const Ottagono&);
  Ottagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[8];
private:
  void set_lati(const vector<Vertice>&);
};
#endif // OTTAGONO_H