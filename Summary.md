# C++ Programming Language Summary

## Part I: Introduction

### 1. Notes to the Reader

### 2. A Tour of C++: The Basics

- const: this value never change
- constexpr: to be evaluated at compile time
```
const int dmv = 17;
int var = 17;
constexpr double max1 = 1.4 * square (dmv); // OK because square (17)
constexpr double max2 = 1.4 * square (var); // NG because var is not const...
```

- for statement
```
int v [] = {0, 1, 2, 3, 4};
for (auto x : v)    // x is copy
  x++;

for (auto &x : v)   // x  is reference to v's element
  x++;  // don't need to * to access the value
```
- declarator operators
```
T a[n]; // T[n]: array of n Ts
T* p;   // T*: pointer to T
T& r;   // T&: reference to T
T f(A); // T(A): function returning T
```
- nullptr: null pointer shared by all pointer types
  - This eliminates confusion between integers (0 or NULL) and pointers (nullptr);

### 3. A Tour of C++: Abstraction Mechanisms
- Concrete Types
  - "just like built-in types"

- destructor
```c++
class Vector {
public:
  Vector (int s)  // constructor
  ~Vector ()      // destructor
}
```

- RAII: Resource Acquisition Is Initialization
  - Acquiring resources in a constructor and  releasing them in a destructor.

- Abstract Types
  - A class with a pure virtual function
  - Also called _polymorphic type_
  - Must be manipulated through pointers or references

- virtual
  - "may be redefined later in a class derived from this one"
  - `= 0`: pure virtual "must be redefined!"

- Virtual function
  - vtbl: virtual function table
  - Interface only knows the location of the pointer to vtbl and the index used for each virtual function.
  - If call to operator[](), which operator[]() will be called?

- Class Hierarchies
  - a set of classes ordered in a lattice.

- 