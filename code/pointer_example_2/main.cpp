#include <iostream>

int main()
{
    int five = 5;
    int three = 3;

    int *pointer_to_five = &five;

    std::cout << "five = " << *pointer_to_five << '\n';

    // change 'pointer_to_five' in the way that it'll be pointing to three variable:
    // vvvvvv put your code below: vvvvvv

    // ^^^^^^ put your code above: ^^^^^^

    if(pointer_to_five != &three)
    {
        std::cout << "Hey, that pointer isn't pointing to the \'three\' variable! :(\n";
    }
    else
    {
        std::cout << "Good job, that pointer is pointing to the \'three\' variable! :)\n";
    }

    std::cout << "five = " << *pointer_to_five << '\n';
}