#include <iostream>
#include <memory>

using std::cout;

void print_var(int var)
{
    cout << "variable: " << var << '\n';
}

void print_pointer(int *var)
{
    cout << "pointer-value: " << *var << ", pointer-address: " << var << '\n';
}

int main()
{
    int variable_one = 1;
    int variable_two = 2;

    int *pointer_to_variable_one = &variable_one;

    print_var(variable_one);
    print_pointer(pointer_to_variable_one);

    std::unique_ptr
}