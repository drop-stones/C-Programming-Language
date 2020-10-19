#include <iostream>

namespace My_code {
class complex {
public:
    complex (int r, int c): r{r}, c{c} {}
    int real () {return r;};
    int imagin () {return c;};
    int sqrt () {return r*r + c*c;}
private:
    int r, c;
};

int main ()
{
    complex z {1, 2};
    auto z2 = z.sqrt ();
    std::cout << '{' << z.real () << ',' << z.imagin () << "}\n";
    return 0;
}
}

int main ()
{
    return My_code::main ();
}