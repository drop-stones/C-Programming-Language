#include <iostream>

using namespace std;	// make names from std visibl without std::

double square (double x)
{
  return x * x;
}

void print_square (double x)
{
  cout << "the square of " << x << " is " << square (x) << "\n";
}

int main ()
{
  print_square (1.234);
}
