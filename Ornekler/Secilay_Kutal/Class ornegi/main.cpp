#include <iostream>
#include <fstream>
using namespace std;

class Uye{
private:
    string isim;
    string soyisim;
    string kullaniciAdi;

public:
    void setKullaniciAdi(string ad, string soyad){
        soyisim = soyad;
        isim = ad;
        kullaniciAdi = isim+soyisim;
    }
    void yeniUye(){
        cout<<"Kullanici Bilgileri:\n"<<endl;
        cout<<"Isim:"<<isim<<" "<<soyisim<<endl;
        cout<<"Kullanici Adi:"<<kullaniciAdi<<endl;
    }
};
int main() {
    Uye uye1;
    uye1.setKullaniciAdi("Emre","Can");
    uye1.yeniUye();
    return 0;
}