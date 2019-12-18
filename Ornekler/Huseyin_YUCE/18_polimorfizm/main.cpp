#include <iostream>
using namespace std;
class Sekil{
protected:
    int genislik, yukseklik;
public:
    Sekil(int a=0, int b=0);
    virtual int alan();
    // int alan();
};
Sekil::Sekil(int a, int b){
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
    Sekil *sekil1, *sekil2;

    Diktorgen dik(10,20);
    Ucgen Ucg(11,11);

    sekil1 = &dik;
    cout << sekil1->alan() << endl;

    sekil2=&Ucg;
    cout << sekil2->alan() << endl;

    return 0;
}