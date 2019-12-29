#include <iostream>
using namespace std;
class A {
public:
    int a, b, c;
    virtual void nesne() = 0;
    A(int a, int b)
    {
        cout << "Hello World!" << endl;
    }
};

class B : public A {
    int y;

public:
    B(int i, int j) : A(a, b)
    {
        a = i;
        b = j;
        c = a + b;
    }
    void nesne() { cout << "Toplam = " << c << endl; }
};

int main(void)
{
    B B1(4, 5);
    B1.nesne();
    return 0;
}