#include "shape.h"
unsigned int Shape::n_shape=0;

//Costruttori

Shape::Shape():id(++n_shape){}
Shape::Shape(const Shape& v):id(++n_shape){}
std::ostream& operator<< (std::ostream& os,const Shape& P){
  return os<<P.toString();
}

unsigned int Shape::get_id() const{return id;}
void Shape::reduce_n_shape(){n_shape--;}
