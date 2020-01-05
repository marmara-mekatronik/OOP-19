#include <iostream>
using namespace std;

class matematiksel_islemler{
public:
    matematiksel_islemler();     //Constructor yapisi olusturuldu.
    int islem1 (int a,int b);
    double islem1 (double a, double b);
    int islem2 (int a,int b);
    double islem2 (double a, double b);
};

matematiksel_islemler::matematiksel_islemler(){
    cout<<"Gelen degerin double veya integer olma durumuna gore islemler yapilacaktir."<<endl;
}

int matematiksel_islemler:: islem1 (int a, int b){  //Toplama islemi icin
    cout<<"integer deger girdiginiz icin islem1 toplama islemi yapti.Sonucunuz: ";
    return (a+b);
}

double matematiksel_islemler:: islem1 (double a, double b){  //Cikarma islemi icin    islem1 overloading edildi.
    cout<<"double deger girdiginiz icin islem1 cikarma islemi yapti.Sonucunuz: ";
    return (a-b);
}

int matematiksel_islemler:: islem2 (int a, int b){  //Carpma islemi icin
    cout<<"integer deger girdiginiz icin islem2 carpma islemi yapti.Sonucunuz: ";
    return (a*b);
}

double matematiksel_islemler:: islem2 (double a, double b){    //Bolme islemi icin     islem2 overloading edildi.
    cout<<"double deger girdiginiz icin islem2 bolme islemi yapti.Sonucunuz: ";
    return (a/b);
}

int main (){

    matematiksel_islemler mat;
    int sayi1=10,sayi2=5;
    double sayi3=5.8, sayi4=3.2;
    //yukarıdaki degerleri degistirerek overloading'ten hangi islemi yaptıracagimizi degistirebiliriz.

    cout <<mat.islem1 (sayi1,sayi2) <<endl;
    cout << mat.islem2 (sayi3,sayi4) <<endl;

    return 0;
}