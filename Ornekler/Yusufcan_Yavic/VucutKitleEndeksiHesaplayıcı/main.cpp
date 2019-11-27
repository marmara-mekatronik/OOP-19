#include <iostream>

class Kullanici{
public:
    char isim[50];
    void setSifre(int gSifre) ;
    void vucutkitle(void);
    void diyet(void);
    int diyetdeger=0;
    int getSifre(void);
    double boy;
    double kilo;
    double oran;
    Kullanici();
    ~Kullanici();

private:
    int sifre;

};

void Kullanici::setSifre(int gSifre) {
    sifre=gSifre;
}

int Kullanici::getSifre() {
    return sifre;
}
void Kullanici::vucutkitle(){

    Kullanici Kullanici1;
    std::cout<<"Kullanici Boyunu Giriniz: "<<std::endl;
    std::cin>>Kullanici1.boy;
    std::cout<<"Kullanici Kilosunu Giriniz: "<<std::endl;
    std::cin>>Kullanici1.kilo;
    Kullanici1.oran=Kullanici1.kilo/(Kullanici1.boy*Kullanici1.boy);
    std::cout<<"Kullanici Vucut Kitle Endeksiniz: "<<Kullanici1.oran<<std::endl;

    if(Kullanici1.oran<18.5){
        std::cout<<"Zayifsiniz."<<std::endl;
        diyetdeger=1;
    }
    else if(18.5<Kullanici1.oran<24.9){
        std::cout<<"Normalsiniz."<<std::endl;
        diyetdeger=2;
    }
    else{
        std::cout<<"Sismansiniz"<<std::endl;
        diyetdeger=3;
    }

}
void Kullanici::diyet(){
    int e;

    std::cout<<"Vucut Kitle Endeksi Hesaplamadiysaniz Hesaplamanizi Oneririz"<<std::endl;
    std::cout<<"1.Vucut Kitle Endeksi Hesapla"<<std::endl;
    std::cout<<"2.Vucut Kitle Endeksine Gore Beslenme Onerisi Al"<<std::endl;
    std::cout<<"***************************************************************"<<std::endl;
    std::cin>>e;
    switch (e){
        case 1:
            vucutkitle();
        case 2:
            switch (diyetdeger){

                case 1:
                    std::cout << "Doktorumuzdan Kilo Alma Programi Aliniz" << std::endl;
                    break;
                case 2:
                    std::cout << "Sagliklisiniz Beslenme Duzeninizi Bozmayin" << std::endl;
                    break;
                case 3:
                    std::cout << "Doktorumuzdan Kilo Verme Programi Aliniz" << std::endl;
                    break;
                default:
                    break;

            }
            break;
        default:
            std::cout << "!!Hata!!" << std::endl;
            break;

    }

}

Kullanici::Kullanici() {
    std::cout<<"***************************"<<std::endl;
    std::cout<<"** Islem Baslatiliyor... **"<<std::endl;
    std::cout<<"***************************"<<std::endl;
}
Kullanici::~Kullanici() {
    std::cout<<"***************************"<<std::endl;
    std::cout<<"** Islemden Cikiliyor... **"<<std::endl;
    std::cout<<"***************************"<<std::endl;
}
int main() {
    int x,y;

    Kullanici Kullanici1;
    std::cout<<"Kullanici Adi Giriniz: "<<std::endl;
    std::cin.getline(Kullanici1.isim,50);
    std::cout<<"Kullanici Pini Giriniz: "<<std::endl;
    std::cin>>x;

    Kullanici1.setSifre(x);
    std::cout<<"Kullanici Adiniz: "<<Kullanici1.isim<<std::endl;
    std::cout<<"Kullanici Sifreniz: "<<Kullanici1.getSifre()<<std::endl;

    std::cout << "********************" << std::endl;
    std::cout << "**    Kontrol     **" << std::endl;
    std::cout << "********************" << std::endl;
    std::cout << "** Hosgeldiniz... **" << std::endl;
    std::cout << "********************" << std::endl;

    for (int i = 0;true ; ++i) {


        std::cout << "** Islem Seciniz: **" << std::endl;
        std::cout << "1.Vucut Kitle Endeksi Hesaplama." << std::endl;
        std::cout << "2.Beslenme Onerisi Alma" << std::endl;
        std::cout << "3.Cikis Yap" << std::endl;
        std::cin >> y;

        switch (y) {
            case 1:
                Kullanici1.vucutkitle();
                break;
            case 2:
                Kullanici1.diyet();
                break;
            case 3:
                goto cik;

            default:
                std::cout << "!!Hata!!" << std::endl;
                break;
        }

    }

cik:

    std::cout << "---------------" << std::endl;
    std::cout << "Tekrar Bekleriz..." << std::endl;

    return 0;
}
