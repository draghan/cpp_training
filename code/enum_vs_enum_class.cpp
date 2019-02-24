// zdefiniujmy 2 typy enumerowane, jeden "zwykły", drugi "zasięgowy" (ang. scoped enum)
enum Color_normal_enum
{
    Black,
    White,
    Orange,
};

enum class Color_scoped_enum
{
    Red,
    Green,
    Blue
};

// i dwie funkcje, które pokażą co można robić a czego nie
// można, jeśli idzie o konwersje zmiennych między enum (class) <=> int

void normal_enum_presentation()
{
    // mamy sobie zmienną typu który jest zwykłym enumem:
    Color_normal_enum color_of_my_socks;

    // przypisanie z podaniem pełnej ("kwalifikowanej") nazwy Typ::labelka_enumeracji
    color_of_my_socks = Color_normal_enum::White;

    // przypisanie przy pomocy tylko samej labelki:
    color_of_my_socks = White;

    // bezpośrednie przypisanie liczby do zmiennej typu "normal" enum jest niedozwolone przez kompilator:
    int code_white = 1;
    color_of_my_socks = code_white;

    // jeśli chcemy możemy go zmusić, rzutując inta na nasz typ:
    color_of_my_socks = (Color_normal_enum)code_white;

    // bezpośrednie przypisanie zmiennej typu "normal" enum do zmiennej typu liczbowego jest dozwolone:
    code_white = color_of_my_socks;

    // można też użyć labelki:
    code_white = White;

    // ...lub z pełną kwalifikowaną nazwą:
    code_white = Color_normal_enum::White;
}

void scoped_enum_presentation()
{
    // mamy sobie zmienną typu który jest enumem 'scoped':
    Color_scoped_enum color_of_my_shirt;

    // przypisanie z podaniem pełnej ("kwalifikowanej") nazwy Typ::labelka_enumeracji
    color_of_my_shirt = Color_scoped_enum::Green;

    // przypisanie przy pomocy tylko samej labelki nie przejdzie:
    color_of_my_shirt = Green;

    // bezpośrednie przypisanie liczby do zmiennej typu "scoped" enum jest niedozwolone przez kompilator:
    int code_green = 1;
    color_of_my_shirt = code_green;

    // jeśli chcemy możemy go zmusić, rzutując inta na nasz typ:
    color_of_my_shirt = (Color_scoped_enum)code_green;

    // bezpośrednie przypisanie zmiennej typu "scoped" enum do zmiennej typu liczbowego jest zabronione przez kompilator:
    code_green = color_of_my_shirt;

    // ...nie można użyć labelki jak to miało miejsce dla zwykłego enuma:
    code_green = Green;

    // ...z pełną kwalifikowaną nazwą też nie przejdzie:
    code_green = Color_scoped_enum::White;

    // możemy rzutować jawnie na inta, wtedy kompilator pozwoli:
    code_green = (int)color_of_my_shirt;
    code_green = (int)Color_scoped_enum::Green;
}

int main()
{
}