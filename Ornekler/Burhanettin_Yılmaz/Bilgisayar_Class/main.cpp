<<<<<<< HEAD
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Bilgisayar{

public:

    void pc_ac();
    void pc_kapat();
    void parola_degistir();
    void ekran_parlakligi();
    void dosya_ekle();
    void son_durum();
    int parola_kontrol();

    //Burada bütün kod üzerinde private değerlerine erişebilecegim fonksiyonlar tanımladım.


private:

    string pc_guncel="acik";
    string guncel_parola="12345";
    int ses_guncel=0;
    int guncel_paraklik=10;
    string dosya_guncel[10]={"Bilgisayarım","Belgelerim"};

    //Burada class ın gizli degerleri tanımladım.

};

//Burda bilgisayarı acarken ve sifreyi degistirirken konrol etmesini istedigim parola kontrol fonksiyonu tanımlandı
int Bilgisayar::parola_kontrol() {
    string sifre;
    cout << "Şifrenizi Giriniz:";
    cin >> sifre;
    if (guncel_parola==sifre){
        return 1;
    }
    else{
        return 0;
    }
}

void Bilgisayar::pc_ac(){
    int ac_kapa=0;
    int ac_sifre;
    if (pc_guncel=="acik"){
        cout <<  "Bilgisayariniz zaten açık\n\n";

        //Burda bilgisayarı acmak istediginde acık-kapalı durumu konrol edildi

    }
    else{

    ac_sifre=parola_kontrol();
    //Burda sifre konrol fonsiyonuna gidilerek fonksiyonun 1 - 0 durumu konrol edildi
    if (ac_sifre==1) {

        cout << "Bilgisatarınız acılıyor\n\n";
        pc_guncel = "acik";
        //Sifre durumu 1 ise bilgisayar acıldı

    }
    else{

        cout << "Hatali sifre girisi yaptininz\n\n";

        //Sifre yanlıs girilmisse Yanlıs ise bildirildi

    }

    }

}
void Bilgisayar::pc_kapat() {
    int pc_ac;
    if (pc_guncel == "kapali") {
        cout << "Bilgisayariniz zaten kapali\n";

        // Bilgisayar gümcel durumu zaten kapalı ise bildirildi

    } else {

        cout << "Bilgisatariniz kapatiliyor\n";
        pc_guncel = "kapali";
        //Bilgisayar acik ise kapatıldı

    }
}

void Bilgisayar::parola_degistir() {

    //Parola degistirmek icin de parola kontrol fonksiyonu kontrol ed

    string yeni_parola;

    int parola_kontrol_sonuc;

    parola_kontrol_sonuc=parola_kontrol();

    if (parola_kontrol_sonuc==1){

        cout<<"Yeni sifrenizi giriniz";
        cin>>yeni_parola;
        guncel_parola=yeni_parola;
    }
}
void Bilgisayar::ekran_parlakligi() {

    int yeni_parlaklik;
    cout << "Yeni istediginiz parlakligi giriniz\n";

    cin >> yeni_parlaklik;
    guncel_paraklik = yeni_parlaklik;

}

void Bilgisayar::dosya_ekle() {

    string yeni_dosya;
    int dosya_indis;
    dosya_indis= strlen(dosya_guncel->c_str());
    /* string olarak tanımlanmış dizilerde strlen fonksiyonu çalışmadığı için strlen(dosya_guncel).c_str olarak degiştirildi
     * bu şekilde dosya_guncel dizisinin en son degeri alındı
     * */

    cout<<"Yeni Eklemek istediginiz dosya ismini giriniz\n";
    cin>>yeni_dosya;
    int i=0;
    for(i;i<=dosya_indis;i++){
        if(i == dosya_indis){
            dosya_guncel[i]=yeni_dosya;
            //yeni dosya dosya_güncel dizisini son dizisine eklendi.
        }
    }

}

void Bilgisayar::son_durum() {

    cout<<"Bilgisayar_Durumu::::"<<pc_guncel<<"\n"<<
          "Bilgisayar Parola::::"<<guncel_parola<<"\n"<<
          "Bilgisayar Ekran Parlakligi::::"<<guncel_paraklik<<"\n"<<
          "Bilgiyar Dosyaları::::"<<dosya_guncel<<"\n\n";
    //Bu fonsiyonla bilgisayarın güncel durumunu ekrarna yazdırdık

}

int main() {
    Bilgisayar Bilgisayar1;
    int sec;

    while (1) {

        //Sonsuz bir while döngüsü açarak sürekli istenen işlemin yapılması saglandı


        cout << "Istediginiz Islemi Seciniz\n\n"
                "1-Bilgisayari Ac\n"
                "2-Bilgisayari Kapat\n"
                "3-Parola Degistir\n"
                "4-Ekran Parlakligi Degistir\n"
                "5-Dosya Ekle\n"
                "6-Cikis yap\n"
                "7-Bilgisayarin guncel durumu" << endl << endl;


        cout << "Yapmak Istediginiz Islemi Seciniz";
        cin >> sec;

        if (sec == 6){
            cout << "Progradan Cikiliyor...\n\n";
        break;
    }
            else{

                switch (sec) {
                    case 1:
                        Bilgisayar1.pc_ac();
                        break;
                    case 2:
                        Bilgisayar1.pc_kapat();
                        break;
                    case 3:
                        Bilgisayar1.parola_degistir();
                        break;
                    case 4:
                        Bilgisayar1.ekran_parlakligi();
                        break;
                    case 5:
                        Bilgisayar1.dosya_ekle();
                        break;
                    case 7:
                        Bilgisayar1.son_durum();
                        break;
                }

            }
        }

    return 0;
=======
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Bilgisayar{

public:

    void pc_ac();
    void pc_kapat();
    void parola_degistir();
    void ekran_parlakligi();
    void dosya_ekle();
    void son_durum();
    int parola_kontrol();

    //Burada bütün kod üzerinde private değerlerine erişebilecegim fonksiyonlar tanımladım.


private:

    string pc_guncel="acik";
    string guncel_parola="12345";
    int ses_guncel=0;
    int guncel_paraklik=10;
    string dosya_guncel[10]={"Bilgisayarım","Belgelerim"};

    //Burada class ın gizli degerleri tanımladım.

};

//Burda bilgisayarı acarken ve sifreyi degistirirken konrol etmesini istedigim parola kontrol fonksiyonu tanımlandı
int Bilgisayar::parola_kontrol() {
    string sifre;
    cout << "Şifrenizi Giriniz:";
    cin >> sifre;
    if (guncel_parola==sifre){
        return 1;
    }
    else{
        return 0;
    }
}

void Bilgisayar::pc_ac(){
    int ac_kapa=0;
    int ac_sifre;
    if (pc_guncel=="acik"){
        cout <<  "Bilgisayariniz zaten açık\n\n";

        //Burda bilgisayarı acmak istediginde acık-kapalı durumu konrol edildi

    }
    else{

    ac_sifre=parola_kontrol();
    //Burda sifre konrol fonsiyonuna gidilerek fonksiyonun 1 - 0 durumu konrol edildi
    if (ac_sifre==1) {

        cout << "Bilgisatarınız acılıyor\n\n";
        pc_guncel = "acik";
        //Sifre durumu 1 ise bilgisayar acıldı

    }
    else{

        cout << "Hatali sifre girisi yaptininz\n\n";

        //Sifre yanlıs girilmisse Yanlıs ise bildirildi

    }

    }

}
void Bilgisayar::pc_kapat() {
    int pc_ac;
    if (pc_guncel == "kapali") {
        cout << "Bilgisayariniz zaten kapali\n";

        // Bilgisayar gümcel durumu zaten kapalı ise bildirildi

    } else {

        cout << "Bilgisatariniz kapatiliyor\n";
        pc_guncel = "kapali";
        //Bilgisayar acik ise kapatıldı

    }
}

void Bilgisayar::parola_degistir() {

    //Parola degistirmek icin de parola kontrol fonksiyonu kontrol ed

    string yeni_parola;

    int parola_kontrol_sonuc;

    parola_kontrol_sonuc=parola_kontrol();

    if (parola_kontrol_sonuc==1){

        cout<<"Yeni sifrenizi giriniz";
        cin>>yeni_parola;
        guncel_parola=yeni_parola;
    }
}
void Bilgisayar::ekran_parlakligi() {

    int yeni_parlaklik;
    cout << "Yeni istediginiz parlakligi giriniz\n";

    cin >> yeni_parlaklik;
    guncel_paraklik = yeni_parlaklik;

}

void Bilgisayar::dosya_ekle() {

    string yeni_dosya;
    int dosya_indis;
    dosya_indis= strlen(dosya_guncel->c_str());
    /* string olarak tanımlanmış dizilerde strlen fonksiyonu çalışmadığı için strlen(dosya_guncel).c_str olarak degiştirildi
     * bu şekilde dosya_guncel dizisinin en son degeri alındı
     * */

    cout<<"Yeni Eklemek istediginiz dosya ismini giriniz\n";
    cin>>yeni_dosya;
    int i=0;
    for(i;i<=dosya_indis;i++){
        if(i == dosya_indis){
            dosya_guncel[i]=yeni_dosya;
            //yeni dosya dosya_güncel dizisini son dizisine eklendi.
        }
    }

}

void Bilgisayar::son_durum() {

    cout<<"Bilgisayar_Durumu::::"<<pc_guncel<<"\n"<<
          "Bilgisayar Parola::::"<<guncel_parola<<"\n"<<
          "Bilgisayar Ekran Parlakligi::::"<<guncel_paraklik<<"\n"<<
          "Bilgiyar Dosyaları::::"<<dosya_guncel<<"\n\n";
    //Bu fonsiyonla bilgisayarın güncel durumunu ekrarna yazdırdık

}

int main() {
    Bilgisayar Bilgisayar1;
    int sec;

    while (1) {

        //Sonsuz bir while döngüsü açarak sürekli istenen işlemin yapılması saglandı


        cout << "Istediginiz Islemi Seciniz\n\n"
                "1-Bilgisayari Ac\n"
                "2-Bilgisayari Kapat\n"
                "3-Parola Degistir\n"
                "4-Ekran Parlakligi Degistir\n"
                "5-Dosya Ekle\n"
                "6-Cikis yap\n"
                "7-Bilgisayarin guncel durumu" << endl << endl;


        cout << "Yapmak Istediginiz Islemi Seciniz";
        cin >> sec;

        if (sec == 6){
            cout << "Progradan Cikiliyor...\n\n";
        break;
    }
            else{

                switch (sec) {
                    case 1:
                        Bilgisayar1.pc_ac();
                        break;
                    case 2:
                        Bilgisayar1.pc_kapat();
                        break;
                    case 3:
                        Bilgisayar1.parola_degistir();
                        break;
                    case 4:
                        Bilgisayar1.ekran_parlakligi();
                        break;
                    case 5:
                        Bilgisayar1.dosya_ekle();
                        break;
                    case 7:
                        Bilgisayar1.son_durum();
                        break;
                }

            }
        }

    return 0;
>>>>>>> upstream/master
}