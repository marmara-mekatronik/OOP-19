#include <iostream>
using namespace std;

class Notlar{                                  //Notlar isimli bir sınıf tanımladık
private:
    double vize,final;
public:
    Notlar(double v, double f);              // double değişkenlerine sahip bir yapıcı fonk. tanımladık
    friend class ortalama;                  // ortalama isimli sınıfa erişim izni verdik.
};

Notlar::Notlar(double v, double f) {       // Yapıcı fonksiyon üzerinden private değişkenleri aldık.
    vize=v;
    final=f;
}

class ortalama{                           //Ortalama sınıfını tanımladık
    double a,b;                          //private olarak a ve b değişkenleri verdik
public:
    void notort(Notlar &n);             //"Notlar" yapıcı fonk. ile adres üzerinden v ve f değerlerine ulaşacağız.
};

void ortalama::notort(Notlar &n) {     //notort fonksiyonunnun işlevini tanımladık.
double ort=(((n.final)+(n.vize))/2);
    cout<<"Not ortalamaniz: "<<ort<<endl;
    if(ort<35){
        cout<<"Ders tekrarina kaldiniz!"<<endl;
    }

}

int main(){
Notlar ogrenci1(35.5,70.3);
ortalama notort1;
notort1.notort(ogrenci1);

    return 0;
}