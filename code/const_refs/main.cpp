#include <iostream>
using std::cout;
using large = long double;

large add(large &a, large &b)
{
    return a + b;
}

int main()
{
    // (0)
    // literals are Rvalues
    // cout << add(5, 6);

    // (1)
    large five = 5;
    large six = 6;
    cout << add(five, six);
    // now original data could be changed :<

    // (2)
    // now data can't change but also...
    // can't be passed to the function
    const large seven = 7;
    const large eight = 8;
    // cout << add(seven, eight);

    // (3)
    // temporaries are const
    //cout << add(five, 3 + 3);
}