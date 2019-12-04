#include <iostream>

using namespace std;
class Kutu {
public:
    Kutu (double g=2.0, double d=2.0, double y=2.0);
    double hacim ();
private:
    double genislik;
    double derinlik;
    double yukseklik;
};
Kutu::Kutu(double g, double d, double y) {
    cout << "Yapıcı fonksiyon çağrılıyor..." << endl;
    genislik = g;
    derinlik = d;
    yukseklik = y;
}
double Kutu::hacim() {
    return genislik * derinlik * yukseklik;
}

int main() {
    Kutu Kutu1(3.3,1.2,1.5);
    Kutu Kutu2(8.5,6.0,2.0);
    Kutu *ptrKutu;

    ptrKutu = &Kutu1;

    cout << "Kutu 1'in Hacmi :" << ptrKutu->hacim() << endl;

    ptrKutu = &Kutu2;

    cout << "Kutu 2'in Hacmi :" << ptrKutu->hacim() << endl;

}