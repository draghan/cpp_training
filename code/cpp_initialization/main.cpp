#include <iostream>

struct Foo
{
    int bar;

    Foo()
    {
        bar = 0;
        std::cout << "default ctor, bar = " << bar << "\n";
    }

    Foo(int number)
    {
        bar = number;
        std::cout << "ctor with int param, bar = "<< bar << "\n";
    }

    Foo(const Foo& foo)
    {
        bar = foo.bar;
        std::cout << "copy ctor, bar = "<< bar << "\n";
    }


    Foo& operator=(Foo foo)
    {
        this->bar = foo.bar;
        std::cout << "assignment (copy) operator, bar = "<< bar << "\n";

        return *this;
    }

    Foo&operator=(int number)
    {
        this->bar = number;
        std::cout << "assignment (from int) operator, bar = "<< bar << "\n";

        return *this;
    }
};

#define CHAPTER(x) std::cout << '\n' << #x << '\n';

int main()
{
    CHAPTER(0)
    Foo foo0;
    Foo fooL();

    CHAPTER(1)
    Foo foo1(1);
    Foo foo2 = Foo(1);

    CHAPTER(2)
    Foo foo_source = Foo(2);
    Foo foo3 = foo_source;
    Foo foo4(foo_source);
    Foo foo5 = Foo(foo_source);

    CHAPTER(3) // [BTW show explicit]
    Foo foo6 = 3;
    foo6 = 3;
    foo6 = Foo(3);

    CHAPTER(4) // [first show C example]
    Foo foo7 = {4};
    Foo foo8{4};
    Foo foo9{};

    /*/
    CHAPTER(4.5)
    Foo foo11(4.5);
    // Foo foo10{4.5};

    // */
}