#include <iostream>
using namespace std;

class Sekil{
protected:
    double alan, cevre;
public:
    virtual void senNesin()=0;
    virtual void alanHesapla()=0;
    virtual void cevreHesapla()=0;
    double getAlan()const{ return alan; }
    double getCevre()const{ return cevre;}
};
class Dikdortgen:public Sekil{
double yukseklik, genislik;
public:
    Dikdortgen(double yukseklikX, double genislikX): yukseklik(yukseklikX), genislik(genislikX){}
    void senNesin(){cout<<"Ben Bir Dikdorgenim" << endl;}
    void alanHesapla(){ alan=yukseklik*genislik; }
    void cevreHesapla (){ cevre = 2*(yukseklik + genislik); }
    ~Dikdortgen();
};
class Daire:public Sekil{
double r;
public:
    Daire(double rX) : r(rX){}
    void senNesin(){cout<<"Ben Bir Daireyim" << endl;}
    void alanHesapla(){ alan= r * r * 3.1415; }
    void cevreHesapla(){ cevre=2 * 3.1415 * r;}
};
class Kare:public Dikdortgen{
public:
    Kare(double kenarX) : Dikdortgen(kenarX,kenarX){}
    void senNesin(){cout<<"Ben Bir Kareyim" << endl;}
};

int main() {

    Sekil* dizi[3];
    dizi[0]=new Dikdortgen(10,20);
    dizi[1]=new Daire(30);
    dizi[2]=new Kare(30);

    for (int i = 0; i < 3; ++i) {
     dizi[i]->senNesin();
     dizi[i]->alanHesapla();
     dizi[i]->cevreHesapla();
     cout << "Alan :" << dizi[i]->getAlan()<< endl;
     cout << "Cevre :" << dizi[i]->getCevre()<< endl;
    }
    return 0;
}