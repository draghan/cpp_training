#include "Potato.hpp"
#include "RoundSeal.hpp"

int main()
{
    Potato small_potato(30, 20, 0);
    small_potato.print();

    RoundSeal king_seal("The King", 60);
    king_seal.print();
}

