//#include <iostream>
#include <memory>
#include <iostream>

using namespace std;

class Cat
{
public:
    Cat()
    {
        cerr << "Nameless Cat arrives!\n";
    }

    explicit Cat(const string &name)
            : name{name}
    {
        cerr << "Cat " << name << " arrives!\n";
    }

    ~Cat()
    {
        cerr << "Cat " << this->name << " is running away!\n";
    }

    void meow() const
    {
        cerr << "[~" << this->name << "]: MEOW!\n";
    }

private:
    string name;
};

void function_takes_raw_cat(Cat *cat)
{
    cat->meow();
    delete cat;
}

void function_takes_unique_cat(unique_ptr<Cat> cat)
{
    cat->meow();
}

void function_takes_our_cat(shared_ptr<Cat> cat)
{
    cat->meow();
    cerr << "how many friends the shared cat have: " << cat.use_count() << '\n';
}

void function_takes_weak_cat(weak_ptr<Cat> cat)
{
    if(!cat.expired())
    {
        cat.lock()->meow();
        cerr << "how many friends the weak cat have: " << cat.use_count() << '\n';
    }
    else
    {
        cerr << "weak cat expired!\n";
    }
}

void raw_pointer()
{
    Cat *raw_cat = new Cat{"Wild"};
    raw_cat->meow();
    function_takes_raw_cat(raw_cat);
    // do something
    delete raw_cat;
}

void unique_pointer()
{
    unique_ptr<Cat> unique_cat(new Cat("DeadlyHunter2000"));
    unique_cat->meow();
    function_takes_unique_cat(unique_cat);
    if (!unique_cat)
    {
        cerr << "unique_cat has gone!\n";
    } else
    {
        cerr << "unique_cat is still here!\n";
    }
    // do something
}

void shared_pointer()
{
    shared_ptr<Cat> our_cat(new Cat("Darling"));
    our_cat->meow();
    cerr << "how many friends the shared cat have: " << our_cat.use_count() << '\n';
    function_takes_our_cat(our_cat);
    if (!our_cat)
    {
        cerr << "our_cat is gone!\n";
    } else
    {
        cerr << "our_cat is still here!\n";
    }
    cerr << "how many friends the shared cat have: " << our_cat.use_count() << '\n';
}

void weak_pointer()
{
    shared_ptr<Cat> poorly_cat(new Cat("Cake"));
    poorly_cat->meow();
    cerr << "how many friends the weak cat have: " << poorly_cat.use_count() << '\n';
    function_takes_weak_cat(poorly_cat);
    if (!poorly_cat)
    {
        cerr << "poorly_cat is gone!\n";
    } else
    {
        cerr << "poorly_cat is still here!\n";
    }
    cerr << "how many friends the poorly cat have: " << poorly_cat.use_count() << '\n';
}

int main()
{
    weak_pointer();
}