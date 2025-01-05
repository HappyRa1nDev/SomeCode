#include <iostream>
using namespace std;
struct A {
    A() = default;
    A(int _a) : a(_a){}
    int a = -1;
};
struct B : virtual A {
    B(int _a) : A(_a) { b = _a;
    cout << "kek" << a << endl;
    }
    int b = -2;
};
struct C : B, virtual A {
    C():B(100){}
};

//
struct B1 : virtual A {
    B1() :A(100) {}
};
struct C1 : virtual A {
    C1():A(-100){}
};

struct D : B1, C1 {};  // Производный класс


int main()
{
    //особенности виртуального наследования. Виртуальная часть наследуюется самым дальним производным классом один раз.
    C c;
    cout << c.a << endl;
    cout << c.b << endl;
    
    D d;
    cout << d.a << endl;
}

