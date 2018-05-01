#ifndef TRIANGOLO_H
#define TRIANGOLO_H
#include "poligonoconvesso.h"
class Triangolo: public PoligonoConvesso
{
  friend std::ostream& operator<< (std::ostream&,const Triangolo&);
  //friend Shape* crea_poligono(vector<Vertice>&);
public:
  Triangolo(const Triangolo&);


  //virtual double get_altezza(const Vertice&)const;
  virtual unsigned int size() const;
  virtual double get_perimetro() const;
  virtual double get_area() const;
   Triangolo(const vector<Vertice>&);
protected:
  virtual string toString() const;
  double lati[3];
private:
  void set_lati(const vector<Vertice>&);
};

#endif // TRIANGOLO_H
