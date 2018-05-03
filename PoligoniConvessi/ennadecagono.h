#ifndef ENNADECAGONO_H
#define ENNADECAGONO_H

#include "./poligonoconvesso.h"
class Ennadecagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Ennadecagono&);

public:
  Ennadecagono(const Ennadecagono&);
  Ennadecagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[19];
private:
  void set_lati(const vector<Vertice>&);
};


#endif // ENNADECAGONO_H
