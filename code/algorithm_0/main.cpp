#include <vector>
#include <algorithm>
#include <iostream>
#include <random>

void print(const std::vector<int>& table)
{
    for(const auto& i : table)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector<int> some_table{3, 5, 0, 10, -100, 7, 8, 2};
    print(some_table);

    // make a copy
    std::vector<int> other_table{0, 1, 2};
    print(other_table);

    // find minimum
    int min = some_table[0];
    for(const auto& i : some_table)
    {
        if(i < min)
        {
            min = i;
        }
    }
    std::cout << "Min value: " << min << '\n';

    // sort
    // ...?

    // copy
    // ! count elements

    // shuffle
    // ! default_random_engine

    // find element bigger than 6

    // ...
}