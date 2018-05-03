#ifndef OTTADECAGONO_H
#define OTTADECAGONO_H
#include "./poligonoconvesso.h"
class Ottadecagono: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Ottadecagono&);

public:
  Ottadecagono(const Ottadecagono&);
  Ottadecagono(const vector<Vertice>&);
  virtual double get_perimetro() const;
  virtual double get_area() const;
  virtual string toString() const;

protected:
  double lati[18];
private:
  void set_lati(const vector<Vertice>&);
};


#endif // OTTADECAGONO_H
