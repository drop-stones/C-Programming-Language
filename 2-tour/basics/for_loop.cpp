#include <iostream>
using namespace std;

void copy_fct ()
{
    int v1 [10] = { 0, 1, 2, 3, 4, 5 };
    int v2 [10];

    for (auto i = 0; i < 10; i++) {
        v2 [i] = v1 [i];
    }
}

void print ()
{
    int v [] = { 0, 1, 2, 3, 4, 5 };
    for (auto x : v)
      cout << x << '\n';
    for (auto x : {10, 20, 30, 40, 50})
      cout << x << '\n';
}

void increment_with_copy ()
{
    int v [] = {0, 1, 2, 3, 4};
    for (auto x : v) {
        x++;
        cout << x << '\n';
    }
    for (auto x : v) {
        cout << x << '\n';
    }
}
void increment_with_reference ()
{
    int v [] = {0, 1, 2, 3, 4};
    for (auto &x : v) {
        x++;
        cout << x << '\n';
    }
    for (auto &x : v) {
        cout << x << '\n';
    }
}


int main ()
{
    increment_with_copy ();
    increment_with_reference ();
}