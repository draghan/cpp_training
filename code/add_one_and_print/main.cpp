/*
// To the compiler explorer

#include <iostream>
using std::cout;

struct LongDoubles
{
    long double a;
    long double b;
    long double c;
    long double d;
    long double e;
    long double f;
    long double g;
    long double h;
};

double sum_long_doubles(LongDoubles ld)
{
    return ld.a + ld.b + ld.c + ld.d + ld.e + ld.f + ld.g + ld.h;
}

int main()
{
    LongDoubles foo{1, 2, 3, 4, 5, 6, 7, 8};
    auto sum = sum_long_doubles(foo);
    cout << sum;
}

*/

#include <iostream>
using std::cout;

void add_one_and_print(int number)
{
    number = number + 1;
    cout << "incremented number from function: " << number << '\n';
}

int main()
{
    int three = 3;
    cout << "variable \'three\' from main: " << three << '\n';
    add_one_and_print(three);
    cout << "variable \'three\' from main: " << three << '\n';
}