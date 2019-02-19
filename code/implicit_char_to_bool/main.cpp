#include <iostream>

using Wat = int;

enum class Color
{
    White,
    Red,
    Blue,
    Pink
};

std::string color_name(Color color)
{
    switch(color)
    {
        case Color::White:
            return "white";

        case Color::Red:
            return "red";

        case Color::Blue:
            return "blue";

        case Color::Pink:
            return "pink";
    }
}

class Lamp
{
public:
    Lamp(Wat power, Color color = Color::White)
            : power{power},
              color{color}
    {
    }

    ~Lamp()
    {
        turn_off();
    }

    void turn_on()
    {
        std::cout << "The " << color_name(color) << " light is on! I consume " << power << " W.\n";
    }

    void turn_off()
    {
        std::cout << "The " << color_name(color) << " light is off now!\n";
    }

    Wat get_power()
    {
        return power;
    }

private:
    Wat power;
    Color color;
};

class Heater
{
public:
    Heater(std::string name, Wat power)
            : name{name},
              power{power}
    {
    }

    Heater(Lamp lamp)
            : power{lamp.get_power()}
    {
    }

private:
    std::string name;
    Wat power;
};

int main()
{
    char letter_a = 'a';

    int number_hiding_behing_letter_a = letter_a;

    bool is_numer_the_truth = number_hiding_behing_letter_a;

    bool is_letter_a_the_truth = letter_a;

    bool is_letter_a_the_truth_2 = 'a';


    Lamp red_lamp = Lamp(50, Color::Red);
    Lamp white_lamp = Lamp(50);
    Lamp weird_lamp = 42;

    red_lamp.turn_on();
    weird_lamp.turn_on();

    Heater regular = Heater(500);
    Heater in_case_of_emergency = Heater(red_lamp);
    Heater in_case_on_double_trouble = static_cast<Lamp>(42);
}