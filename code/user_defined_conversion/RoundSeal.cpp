#include "RoundSeal.hpp"

RoundSeal::RoundSeal(std::string text, MiliMeter diameter)
{
    this->diameter = diameter;
    this->text = text;
}

void RoundSeal::print()
{
    std::cout << "Round seal with diameter " << diameter << " mm: ( " << text << " )\n";
}

std::string RoundSeal::get_text()
{
    return this->text;
}

MiliMeter RoundSeal::get_diameter()
{
    return this->diameter;
}
