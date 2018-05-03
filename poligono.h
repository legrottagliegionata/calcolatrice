#ifndef POLIGONO_H
#define POLIGONO_H
#include "shape.h"


class Poligono:public Shape
{
public:
  virtual unsigned int size() const=0;
  virtual double get_perimetro() const =0;
  virtual double get_area() const =0;
  virtual string toString() const =0;
  virtual Poligono* aggiungi_vertice(const Vertice&)=0;
  virtual Poligono* rimuovi_vertice(const Vertice&)=0;
  virtual std::vector<Vertice> get_vertici()const=0;
};

#endif // POLIGONO_H
