#ifndef EPTADECAGONO_H
#define EPTADECAGONO_H

#include "./poligonoconvesso.h"
class Eptadecagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Eptadecagono&);

public:
  Eptadecagono(const Eptadecagono&);
  Eptadecagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[17];
private:
  void set_lati(const vector<Vertice>&);
};


#endif // EPTADECAGONO_H
