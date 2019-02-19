#include <iostream>
#include <conio.h>
using namespace std;

class KLASA_A
{
public:
    int x;
    KLASA_A(int arg_x):x(arg_x){;}
};

void zamien(KLASA_A*wsk_na_objekt)
{
    delete wsk_na_objekt;
    wsk_na_objekt=new KLASA_A(2);
}
int main ()
{
    KLASA_A* OBJEKT=new KLASA_A(1);

    zamien(OBJEKT);

    cout<<OBJEKT->x;

    return 0;
}