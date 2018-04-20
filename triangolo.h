#ifndef TRIANGOLO_H
#define TRIANGOLO_H
#include "poligonoconvesso.h"
class Triangolo: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Triangolo&);
public:
  Triangolo()=default;
  Triangolo(const Triangolo&);
  Triangolo(const vector<Vertice>&);

  virtual double get_altezza(const Vertice&)const;
  virtual unsigned int size() const;
  virtual double get_perimetro() const;
  virtual double get_area() const;
};

#endif // TRIANGOLO_H
