#include <iostream>
#include <limits>
#include <ios>
#include <iomanip>

void set_cout_for_printing_floating_points_well()
{
    std::cout << std::showpoint;
    std::cout << std::setprecision(20);
    std::cout << std::fixed;
}

int main()
{
    set_cout_for_printing_floating_points_well();

    auto epsilon_double = std::numeric_limits<double>::epsilon();
    auto epsilon_float = std::numeric_limits<float>::epsilon();

    std::cout << "double eps:\t" << epsilon_double << '\n';
    std::cout << "float eps:\t" << epsilon_float << "\n\n";

    // (1)
    std::cout << "\n\n1\n";
    double could_be_too_small_for_float = 1.0 + epsilon_double;
    float result_of_implicit_conversion = could_be_too_small_for_float;

    std::cout << "double:\t\t" << could_be_too_small_for_float << '\n';
    std::cout << "float:\t\t" << result_of_implicit_conversion << '\n';

    // (2)
    std::cout << "\n\n2\n";
    could_be_too_small_for_float = 1.0 + epsilon_float - epsilon_double;
    result_of_implicit_conversion = could_be_too_small_for_float;

    std::cout << "double:\t\t" << could_be_too_small_for_float << '\n';
    std::cout << "float:\t\t" << result_of_implicit_conversion << '\n';

    // (3) !!
    std::cout << "\n\n3\n";
    double definitely_too_big_for_float = std::numeric_limits<double>::max();
    result_of_implicit_conversion = definitely_too_big_for_float; // UB!

    std::cout << "double:\t\t" << definitely_too_big_for_float<< '\n';
    std::cout << "float:\t\t" << result_of_implicit_conversion << '\n';
}