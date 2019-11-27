#include <iostream>

using namespace std;

class Kare;

class dikdortgen;

class dikdortgen {
    int genislik, yukseklik;
public:
    void setKenarlar(int gen, int yuk);
    int alan();
    void cevir(Kare &a);
};

class Kare {
    friend class dikdortgen;
public:
    Kare(int a);
private:
    int kenar;
};

void dikdortgen::cevir(Kare &a) {
    genislik=a.kenar;
    yukseklik=a.kenar;
}
int dikdortgen::alan() {
    return genislik * yukseklik;
}

void dikdortgen::setKenarlar(int gen, int yuk) {
    genislik = gen;
    yukseklik = yuk;
}


Kare::Kare(int a) {
    kenar = a;
}

int main() {
    dikdortgen dikdortgen1;
    dikdortgen1.setKenarlar(15,20);
    cout << dikdortgen1.alan() << endl;
    Kare kare1(50);
    dikdortgen1.cevir(kare1);
    cout << dikdortgen1.alan() << endl;
    return 0;
}
