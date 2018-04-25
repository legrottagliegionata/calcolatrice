#include "shape.h"
unsigned int Shape::n_shape=0;

//Costruttori

Shape::Shape():id(++n_shape){}
std::ostream& operator<< (std::ostream& os,const Shape& P){
  return os<<P.toString();
}

