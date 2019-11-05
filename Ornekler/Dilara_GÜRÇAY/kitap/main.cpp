#include <iostream>
using namespace std;

class kitap {
public:
    char tur[100];
    char ad[100];
    char yazar[100];
    int sayfasayisi;

};


int main() {


    kitap kitap1;

    cout << "Kitabin adini giriniz: ";
    cin.getline(kitap1.ad,100);
    cout << "Kitabin yazarini giriniz: ";
    cin.getline(kitap1.yazar,100);
    cout<< "Kitabin turunu giriniz: ";
    cin.getline(kitap1.tur,100);
    cout << "Kitabin sayfa sayisini giriniz: ";
    cin>> kitap1.sayfasayisi;

    cout << "Kitabin adi: "<< kitap1.ad << ", yazari: "<< kitap1.yazar << ", turu: "<< kitap1.tur << ", sayfa sayisi: "<< kitap1.sayfasayisi << endl;

    return 0;
}