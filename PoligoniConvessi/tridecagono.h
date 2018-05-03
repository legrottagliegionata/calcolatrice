#ifndef TRIDECAGONO_H
#define TRIDECAGONO_H


#include "./poligonoconvesso.h"
class Tridecagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Tridecagono&);

public:
  Tridecagono(const Tridecagono&);
  Tridecagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[13];
private:
  void set_lati(const vector<Vertice>&);
};

#endif // TRIDECAGONO_H
