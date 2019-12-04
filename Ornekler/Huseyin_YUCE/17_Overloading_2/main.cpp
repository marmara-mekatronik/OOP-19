#include <iostream>

using namespace std;
class Kutu {

public:
    double getHacim(void);
    void setUzunluk(double uzn);
    void setGenislik(double gen );
    void setYukseklik(double yuk);
    Kutu operator+(const Kutu& b){
        Kutu kutucuk;
        kutucuk.uzunluk = this->uzunluk + b.uzunluk;
        kutucuk.genislik = this->genislik + b.genislik;
        kutucuk.yukseklik = this->yukseklik + b.yukseklik;
        return kutucuk;
    }

private:
    double uzunluk, genislik, yukseklik;
};

double Kutu::getHacim(void) {
    return uzunluk * genislik * yukseklik;
}
void Kutu::setUzunluk(double uzn) {
    uzunluk = uzn;
}
void Kutu::setGenislik(double gen) {
    genislik = gen;
}
void Kutu::setYukseklik(double yuk) {
    yukseklik = yuk;
}


int main() {
    Kutu kutu1;
    Kutu kutu2;
    Kutu kutu3;
    double hacim = 0.0;

    kutu1.setUzunluk(15.5);
    kutu1.setGenislik(30.1);
    kutu1.setYukseklik(10.1);

    kutu2.setUzunluk(15.5);
    kutu2.setGenislik(30.1);
    kutu2.setYukseklik(5.9);

    hacim = kutu1.getHacim();
    cout << "Kutu 1'in hacmi : " << hacim << endl;

    hacim =  kutu2.getHacim();
    cout << "Kutu 2'in hacmi : " << hacim << endl;

    kutu3 = kutu1 + kutu2 ;
    hacim = kutu3.getHacim();
    cout << "Kutu 3'in hacmi : " << hacim << endl;


    return 0;
}