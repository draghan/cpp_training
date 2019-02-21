#include <iostream>

// write a function that takes a pointer to int as parameter
// and change its value, increasing by 2

int main()
{
    const int value = 900;

    int variable_from_main = value;

    // make a call of your function, pass 'variable_from_main' as a parameter:
    // VVVVVVVV put the call below VVVVVVVV

    // ^^^^^^^^ put the call above ^^^^^^^^

    if(variable_from_main == value + 2)
    {
        std::cout << "The value of \'variable_from_main\' is correct!\nCongratulations!! :)";
    }
    else if(variable_from_main == value)
    {
        std::cout << "The value of \'variable_from_main\' has not changed. :(";
    }
    else
    {
        std::cout << "The value of \'variable_from_main\' is " << variable_from_main << "... Something went wrong. :<<";
    }
}