#include <iostream>
#include "Potato.hpp"
using std::cout;

void print_potato(const Potato& potato)
{
    potato.print();
}

int main()
{
    // (0)
    Potato potato{50, 40, 30};
    print_potato(potato);

    // (1)
    const Potato my_favorite_potato{100, 100, 0};
    cout << "my favorite potato's weight is: " << my_favorite_potato.get_weight();
}

