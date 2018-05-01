#ifndef PENTAGONO_H
#define PENTAGONO_H

#include "poligonoconvesso.h"
class Pentagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Pentagono&);

public:
  Pentagono(const Pentagono&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  Pentagono(const vector<Vertice>&);
  virtual string toString() const;

protected:
  double lati[5];
private:
  void set_lati(const vector<Vertice>&);
};


#endif // PENTAGONO_H
