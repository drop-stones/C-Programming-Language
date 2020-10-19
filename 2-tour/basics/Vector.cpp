// Vector.cpp

#include "Vector.hpp"

Vector::Vector (int s) : elem {new double [s]}, sz {s}
{
    // do nothing
}

double& Vector::operator[] (int i)
{
    return elem [i];
}

int Vector::size ()
{
    return sz;
}