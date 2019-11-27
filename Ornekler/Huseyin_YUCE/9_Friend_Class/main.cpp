#include <iostream>

class A{
public:
    A();
    friend class B;
private:
    int a;

};

class B{
public:
    void GosterA(A &x);
private:
    int b;
};

A::A() {
    a=0;
}
void B::GosterA(A &x) {
    std::cout<< "A::a=" << x.a;
}
int main() {
    A a;
    B b;
    b.GosterA(a);
    return 0;
}