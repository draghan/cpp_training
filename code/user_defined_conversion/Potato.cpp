#include "Potato.hpp"

Potato::Potato(Gram weight, MiliMeter diameter, Percent cooked)
{
    this->weight = weight;
    this->cooked = cooked;
    this->diameter = diameter;
}

void Potato::print()
{
    std::cout << "Potato with weight " << weight << " g and diameter " << diameter << " mm is " << (int)cooked << "% cooked!\n";
}

Gram Potato::get_weight()
{
    return this->weight;
}

MiliMeter Potato::get_diameter()
{
    return this->diameter;
}

Percent Potato::get_cooked()
{
    return this->cooked;
}
