#include <iostream>
#include <string>

using namespace std;

template <typename T>
concept has_to_string = requires(T t) {
    {
        t.to_string()
    } -> same_as<string>;
};

class A {
public:
    string to_string()
    {
        return "this is A";
    }
};

class B {
public:
    void to_string()
    {
    }
};

class C {
};

template <typename T>
void print(T t)
    requires(has_to_string<T>)
{
    cout << t.to_string() << endl;
}

int main()
{
    A a;
    B b;
    C c;
    print(a);
    print(b);
    print(c);
}
