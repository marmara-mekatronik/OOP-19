
#include <iostream>

using namespace std;

class Kutu {
public:
    static int Nesne_Sayici;
    double Hacim();
    void ozellikler();
    Kutu(double l = 2.0, double b = 2.0, double h = 2.0) {
        cout <<"Insaatci cagirildi." << endl;
        uzunluk = l;
        genislik = b;
        yukseklik = h;
        Nesne_Sayici++;
    }
    ~Kutu();
private:
    double uzunluk;
    double genislik;
    double yukseklik;
};

int Kutu::Nesne_Sayici = 0;

double Kutu::Hacim() {
    return uzunluk * genislik * yukseklik;
}

void Kutu::ozellikler(){
    cout <<"Uzunluk = "<<uzunluk<<" Genislik = "<<genislik<<" Yukseklik = "<<yukseklik<<endl;
}

Kutu::~Kutu() {
    cout <<"Nesne yok edildi. \n";
}

int main(void) {
    cout << "Sayici baslangic degeri: " << Kutu::Nesne_Sayici << endl;
    Kutu Kutu1(3.3, 1.2, 1.5);
    Kutu Kutu2(8.5, 6.0, 2.0);
    double kutu1_hacim=Kutu1.Hacim();
    cout << "Kutu_1 hacim = " << kutu1_hacim << endl;
    cout << "Kutu_1 ozellikleri = ";
    Kutu1.ozellikler();
    cout << "Sayici son deger: " << Kutu::Nesne_Sayici << endl;
    return 0;
}