#include <iostream>
#include <string.h>
using namespace std;

class ogrenci_evi{
    string ad,soyad,bolum;
    int yas;
public:
    void bilgileri_al(){
        cout<<"ad:";
        cin>>ad;
        cout<<"soyad:";
        cin>>soyad;
        cout<<"bolumu:";
        cin>>bolum;
        cout<<"yas:";
        cin>>yas;
    }
    void bilgileri_goster(){
        cout<<ad<<endl;
        cout<<soyad<<endl;
        cout<<bolum<<endl;
        cout<<yas<<endl;
    }
};
int main(){
    ogrenci_evi ogrenci1;
    ogrenci_evi ogrenci2;
    ogrenci_evi ogrenci3;

    ogrenci1.bilgileri_al();
    ogrenci2.bilgileri_al();
    ogrenci3.bilgileri_al();

    ogrenci1.bilgileri_goster();
    ogrenci2.bilgileri_goster();
    ogrenci3.bilgileri_goster();

}