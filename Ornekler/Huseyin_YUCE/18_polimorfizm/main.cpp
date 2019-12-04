#include <iostream>
using namespace std;
class Sekil{
protected:
    int genislik, yukseklik;
public:
    Sekil(int a=0, int b=0);
    virtual int alan();
};
Sekil::Sekil(int a, int b) {
    genislik = a;
    yukseklik = b;
}
 int Sekil::alan() {
    cout << "Ebeveyn class alani :" << endl;
    return 0;
}
class Diktorgen: public Sekil{
public:
    Diktorgen(int a =0, int b=0):Sekil(a, b){}
    int alan(){
        cout << "Dikdortgenin Alani :";
        return (genislik*yukseklik);
    }
};
class Ucgen: public Sekil{
public:
    Ucgen(int a=0, int b=0):Sekil(a,b){}
     int alan(){
        cout << "Ucgenin Alani :";
        return (genislik*yukseklik)/2;
    }
};

int main() {
    Sekil *sekil;

    Diktorgen dik(10,7);
    Ucgen Ucg(10,5);

    sekil = &dik;
    cout << sekil->alan() << endl;

    sekil=&Ucg;
    cout << sekil->alan() << endl;

    return 0;
}