#pragma once

#include <iostream>
#include "Types.hpp"

class RoundSeal
{
public:
    RoundSeal(std::string text, MiliMeter diameter);

    void print();

    std::string     get_text();
    MiliMeter       get_diameter();

private:
    std::string text;
    MiliMeter diameter;
};