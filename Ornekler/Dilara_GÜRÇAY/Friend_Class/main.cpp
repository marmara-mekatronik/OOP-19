#include <iostream>
using namespace std;

class Yonetici{
    friend class Uye;
public:
    Yonetici(){
        sifre="qwer";
    }
private:
    string sifre;
};

class Uye{
public:
    string girilenSifre;
    int karsilastir(Yonetici& yon);
};
int Uye::karsilastir(Yonetici& yon){
    return this->girilenSifre==yon.sifre;
}

int main() {
    Yonetici Y;
    Uye Uye1;
    int deneme=0;
    do{
        cout<<"Parolayı giriniz:";
        cin>>Uye1.girilenSifre;
        if(Uye1.karsilastir(Y)){
            cout<<"Parola doğru."<<endl;
            break;
        } else {
            if(deneme<2) cout<<"Girilen parola yanlış. Tekrar deneyiniz..."<<endl;
        }
        deneme++;
    }while(deneme<3);
    if((deneme==3)&(Uye1.karsilastir(Y)!=1)){
        cout<<"Yeni parola alınız."<<endl;
    }

    return 0;
}