#include "Container.hpp"
#include "Vector.cpp"

class Vector_container : public Container {
  Vector v;
public:
  Vector_container (int s) : v(s) {}
  ~Vector_container () {}
  double& operator[] (int i) { return v [i]; }
  int size () const { return v.size (); }
};
