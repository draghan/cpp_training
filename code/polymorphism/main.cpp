#include <iostream>
#include <memory>
#include <vector>

class Parent
{
public:
    void hello()
    {
        std::cout << "Good morning!\n";
    }
};

class Child: public Parent
{
public:
    void hello()
    {
        std::cout << "Wazzzzup!\n";
    }
};

class GrandChild: public Child
{
public:
    void hello()
    {
        std::cout << "bffflejhasdkdf\n";
    }
};

int main()
{
    using namespace std;
    vector<unique_ptr<Parent>> house;

    house.push_back(std::make_unique<Parent>());
    house.push_back(std::make_unique<Parent>());
    house.push_back(std::make_unique<Child>());
    house.push_back(std::make_unique<GrandChild>());


    for(const auto &inmate : house)
    {
        inmate->hello();
    }
}