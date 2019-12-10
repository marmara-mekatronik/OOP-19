#include <iostream>
using namespace std;

class kisi{
public:
    static int nesneSayisi;
    kisi();
    string ad;
    string soyad;
};
int kisi::nesneSayisi=0;
kisi::kisi(){
    nesneSayisi++;
    cout<<kisi::nesneSayisi<<". kişi oluşturuluyor..."<<endl;
}

int main() {
    kisi *ptrk;
    kisi kisi1;
    cout<<"Ad: ";
    cin>>kisi1.ad;
    cout<<"Soayd: ";
    cin>>kisi1.soyad;
    ptrk=&kisi1;
    cout<<"Mail adresiniz: "<<ptrk->ad<<ptrk->soyad<<"@gmail.com"<<endl;

    kisi kisi2;
    cout<<"Ad: ";
    cin>>kisi2.ad;
    cout<<"Soyad: ";
    cin>>kisi2.soyad;
    ptrk=&kisi2;
    cout<<"Mail adresiniz: "<<ptrk->ad<<ptrk->soyad<<"@gmail.com"<<endl;
    return 0;
}