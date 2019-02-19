#include <stdio.h>

struct Data
{
    int a;
    float b;
};

void print(struct Data data)
{
    printf("a = %d, b = %f\n", data.a, data.b);
}

int main()
{
    struct Data d1;
    d1.a = 5;
    d1.b = 10.f;
    print(d1);

    struct Data d2 = {50, };
    print(d2);

    struct Data d3 = {50, 100.f};
    print(d3);

    int tab[5] = {1, 2, 3, 4, 5};

}