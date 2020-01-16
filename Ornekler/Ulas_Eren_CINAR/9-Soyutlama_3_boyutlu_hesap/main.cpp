#include <iostream>

using namespace std;

class Sekil {
protected:
    double alan, hacim;
public:
    virtual void senNesin() = 0;
    virtual void Yuzey_Alani_Hesapla() = 0;
    virtual void Hacim_Hesapla() = 0;
    double getAlan() const { return alan; }
    double getHacim() const { return hacim; }
};

class Dikdortgenler_prizmasi : public Sekil {
    double en, boy , yukseklik;
public:
    Dikdortgenler_prizmasi(double yukseklikX, double enX, double boyX) : yukseklik(yukseklikX), en(enX) ,boy(boyX) {}
    void senNesin() { cout << "Ben Bir Dikdortgenler prizmasiyim" << endl; }
    void Yuzey_Alani_Hesapla() { alan = en * boy * 2 + yukseklik * boy * 2 + en * yukseklik * 2; }
    void Hacim_Hesapla() { hacim = en * boy * yukseklik; }

    ~Dikdortgenler_prizmasi();
};

class Silindir : public Sekil {
    double r, yukseklik;
public:
    Silindir(double rX, double yukseklikX) : r(rX),yukseklik(yukseklikX) {}
    void senNesin() { cout << "Ben Bir Silindirim" << endl; }
    void Yuzey_Alani_Hesapla() { alan = r * r * 3.1415 * 2 + 2 * 3.1415 * r * yukseklik; }
    void Hacim_Hesapla() { hacim = r * r * 3.1415 * yukseklik; }
};

class Kup : public Dikdortgenler_prizmasi {
public:
    Kup(double kenarX) : Dikdortgenler_prizmasi(kenarX, kenarX ,kenarX) {}
    void senNesin() { cout << "Ben Bir Kupum" << endl; }
};

int main() {

    Sekil *dizi[3];
    dizi[0] = new Dikdortgenler_prizmasi(10, 20,30);
    dizi[1] = new Silindir(30,10);
    dizi[2] = new Kup(30);

    for (int i = 0; i < 3; ++i) {
        dizi[i]->senNesin();
        dizi[i]->Yuzey_Alani_Hesapla();
        dizi[i]->Hacim_Hesapla();
        cout << "Yuzey Alani :" << dizi[i]->getAlan() << endl;
        cout << "Hacim :" << dizi[i]->getHacim() << endl;
    }
    return 0;
}