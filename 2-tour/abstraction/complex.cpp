
class complex {
  double re, im;
public:
  complex (double r, double i): re {r}, im {i} {}
  complex (double r): re {r}, im {0} {}
  complex (): re {0}, im {0} {}

  double real () const {return re;}
  void real (double d) {re = d;}
  double imag () const {return im;}
  void imag (double i) {im = i;}

  complex& operator+ = (complex z) { re += z.re; im += z.im; return *this; } // add to re and im
  complex& operator- = (complex z) { re -= z.re; im -= z.im; return *this; } // sub from re and im
  complex& operator* = (complex); // defined out-of-class somewhere
  complex& operator/ = (complex);
};

complex operator+ (complex a, complex b) { return a += b; }
complex operator- (complex a, complex b) { return a -= b; }
complex operator- (complex a) { return { -a.real (), -a.imag ()}; }
complex operator* (complex a, complex b) { return a *= b; }
complex operator/ (complex a, complex b) { return a /= b; }
