#ifndef SHAPE_H
#define SHAPE_H

#include "vertice.h"
#include<vector>
#include <string>
#include<iostream>
#include<sstream>

using std::string;
using std::stringstream;
class Shape
{
    friend std::ostream& operator<< (std::ostream&,const Shape&);

    protected:
            static void reduce_n_shape();
            unsigned int id=0;
            virtual string toString() const =0;

    public:
            Shape(const Shape&);
            virtual ~Shape()=default;
            Shape();
            unsigned int get_id() const;
    private:
            static unsigned int n_shape;

};

#endif // SHAPE_H
