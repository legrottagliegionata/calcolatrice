#ifndef ENDECAGONO_H
#define ENDECAGONO_H

#include "./poligonoconvesso.h"
class Endecagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Endecagono&);

public:
  Endecagono(const Endecagono&);
  Endecagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[11];
private:
  void set_lati(const vector<Vertice>&);
};

#endif // ENDECAGONO_H
