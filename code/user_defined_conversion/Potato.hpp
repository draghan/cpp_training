#pragma once

#include <iostream>
#include "Types.hpp"

class Potato
{
public:
    Potato(Gram weight, MiliMeter diameter, Percent cooked);

    void print();

    Gram        get_weight();
    MiliMeter   get_diameter();
    Percent     get_cooked();

private:
    Gram weight;
    MiliMeter diameter;
    Percent cooked;
};
