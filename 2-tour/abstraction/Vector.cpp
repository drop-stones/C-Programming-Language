#include <iostream>


class Vector {
private:
  double* elem;
  int sz;
public:
  Vector (int s): elem { new double [s]}, sz {s}
  {
    for (int i = 0; i < s; ++i)
      elem [i] = 0;
  }
  // destructor
  ~Vector () { delete[] elem; }

  Vector (const Vector& a);		// copy constructor
  Vector& operator= (const Vector& a);	// copy assignment

  Vector (Vector&& a);			// move constructor
  Vector& operator= (Vector&& a);	// move assignment

  double& operator[] (int i);
  int size () const;
};

Vector::Vector (const Vector& a): elem {new double[a.sz]}, sz {a.sz} // copy constructor
{
  for (int i = 0; i < sz; i++)
    elem [i] = a.elem [i];
}

Vector& Vector::operator= (const Vector& a) // copy assignment
{
  double* p = new double[a.sz];
  for (int i = 0; i < a.sz; i++)
    p[i] = a.elem [i];
  delete[] elem;
  elem = p;
  sz = a.sz;
  return *this;
}

Vector::Vector (Vector&& a): elem {a.elem}, sz {a.sz}	// grab the element from a
{
  a.elem = nullptr;	// now a has no number
  a.sz = 0;
}

double& Vector::operator[] (int i)
{
  return elem [i];
}

int Vector::size () const
{
  return sz;
}



void check_copy ()
{
  Vector v1 (5);
  Vector v2 = v1;	// copy constructor
  v1 [0] = 2;
  std::cout << "v1 [0] = " << v1 [0] << ", v2 [0] = " << v2 [0] << '\n';
  v2 [0] = 4;
  std::cout << "v1 [0] = " << v1 [0] << ", v2 [0] = " << v2 [0] << '\n';
  v2 = v1;
  std::cout << "v1 [0] = " << v1 [0] << ", v2 [0] = " << v2 [0] << '\n';
}

void check_move ()
{

}

int main ()
{
  check_copy ();
}
