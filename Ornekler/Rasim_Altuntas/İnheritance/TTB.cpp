//
// Created by WINDOWS on 30.11.2019.
//

#include "TTB.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <string.h>
using namespace std;

chrono::time_point<chrono::system_clock> gecen_sureyi_baslatma(){
    chrono::time_point<chrono::system_clock> baslangic;
    baslangic = chrono::system_clock::now();
    return baslangic;
}

double gecen_sureyi_hesapla(chrono::time_point<chrono::system_clock> baslangic){
    chrono::time_point<chrono::system_clock>bitis;
    bitis = chrono::system_clock::now();
    chrono::duration<double> kullanim_sresi;
    kullanim_sresi = bitis-baslangic;
    return kullanim_sresi.count();

}

int TTB::Sifre_Kontol(int sifre_1, int sifre_2) {
    if(sifre_1==sifre_2){
        return 1;
    }
    else{
        return 0;
    }
}

void Bilgisayar::kullanicidan_sifre_alma() {
    cout << "Sifrenizi Giriniz:";
    cin >> girilenSifre;

}

void Telefon::kullanicidan_sifre_alma() {
    cout << "Sifrenizi Giriniz:";
    cin >> girilenSifre;
}

void TV::kullanicidan_sifre_alma() {
    cout << "Sifrenizi Giriniz:";
    cin >> girilenSifre;
}

void Bilgisayar::sifre_degistir() {
    int yenisifre;
    kullanicidan_sifre_alma();
    int sonuc = Bilgisayar::Sifre_Kontol(girilenSifre,kayitli_sifre);
    if(sonuc == 1){
        cout << "Yeni Sifrenizini Giriniz:"<<endl;
        cin >> yenisifre;
        kayitli_sifre = yenisifre;
    }
    else
        cout << "Yanlıs Giriş Yaptınız..."<<endl;
}

void Telefon::sifre_degistir() {
    int yenisifre;
    kullanicidan_sifre_alma();
    int sonuc = Telefon::Sifre_Kontol(girilenSifre,kayitli_sifre);
    if(sonuc == 1){
        cout << "Yeni Sifrenizini Giriniz:"<<endl;
        cin >> yenisifre;
        kayitli_sifre = yenisifre;
    }
    else
        cout << "Yanlıs Giriş Yaptınız..."<<endl;
}

void TV::sifre_degistir() {
    int yenisifre;
    kullanicidan_sifre_alma();
    int sonuc = TV::Sifre_Kontol(girilenSifre,kayitli_sifre);
    if(sonuc == 1){
        cout << "Yeni Sifrenizini Giriniz:"<<endl;
        cin >> yenisifre;
        kayitli_sifre = yenisifre;
    }
    else
        cout << "Yanlıs Giriş Yaptınız..."<<endl;
}

string Bilgisayar::gecen_zaman() {
    chrono::time_point<chrono::system_clock>bitis;
    bitis = chrono::system_clock::now();
    time_t bitis_zamani_1 = chrono::system_clock::to_time_t(bitis);
    return ctime(&bitis_zamani_1);
}

string Telefon::gecen_zaman() {
    chrono::time_point<chrono::system_clock>bitis;
    bitis = chrono::system_clock::now();
    time_t bitis_zamani_1 = chrono::system_clock::to_time_t(bitis);
    return ctime(&bitis_zamani_1);
}

string TV::gecen_zaman() {
    chrono::time_point<chrono::system_clock>bitis;
    bitis = chrono::system_clock::now();
    time_t bitis_zamani_1 = chrono::system_clock::to_time_t(bitis);
    return ctime(&bitis_zamani_1);
}

void Telefon::rehber_goruntuleme() {{
    for(int i=0;i<3;i++){
        cout << rehber[i]<<endl;
    }
}}

void Whatsapp::mesaj_yolla() {
    long long int mesaj_gonderilicek_numara;
    for (int i = 0; i < 3 ; ++i) {
        cout << "Kayıtlı_Numaralar : "<<rehber[i]<<endl;
    }
    cout << "Numarayı Giriniz:";
    cin >> mesaj_gonderilicek_numara;
    cout << endl<<endl<<"Mesajınızı Giriniz:";
    cin >> yollanicak_mesaj;

    strcpy(son_mesaj_2,son_mesaj_1);
    strcpy(son_mesaj_1,sonmesaj);
    strcpy(sonmesaj,yollanicak_mesaj);
    system("PAUSE");

}

void Whatsapp::sifre_degistir() {
    TTB TTB1;
    int yenisifre;
    cout << "Geçerli Sifrenizi Giriniz::";
    cin >> girilen_sifre;
    int sonuc=TTB1.Sifre_Kontol(girilen_sifre,kayitli_sifre);
    if(sonuc == 1){
        cout << "Yeni Sifrenizini Giriniz:"<<endl;
        cin >> yenisifre;
        kayitli_sifre = yenisifre;
    }
    else
        cout << "Yanlıs Giriş Yaptınız..."<<endl;

}

void Whatsapp::mesajlari_goruntule() {
    cout << sonmesaj<<endl;
    cout << son_mesaj_1<<endl;
    cout << son_mesaj_2<<endl;
    cout << "----------------"<<endl;
    cout << "Son Gorülme :"<< son_gorulme<<endl;
}

void netflix::sifre_degistir() {
    TTB TTB1;
    int yenisifre;
    cout << "Geçerli Sifrenizi Giriniz::";
    cin >> girilen_sifre;
    int sonuc=TTB1.Sifre_Kontol(girilen_sifre,kayitli_sifre);
    if(sonuc == 1){
        cout << "Yeni Sifrenizini Giriniz:"<<endl;
        cin >> yenisifre;
        kayitli_sifre = yenisifre;
    }
    else
        cout << "Yanlıs Giriş Yaptınız..."<<endl;
}

void netflix::dizi_bilgiler() {
    cout << "Suanki Dizi:"<<en_son_izlenilen_dizi<<endl;
    cout << "Gecerli Bölüm " << kalinan_bolum<<endl;
    cout << "Kalinan Dakika"<<kalinan_dakika<<endl;
    cout << "Onerilen Dizi:"<< onerilen_dizi<<endl;
}

void netflix::dizi_izlemeye_basla() {
    chrono::time_point<chrono::system_clock> baslangic;
    baslangic=gecen_sureyi_baslatma();
    double gecen_sure;
    while (1){
        gecen_sure=gecen_sureyi_hesapla(baslangic);
        if(gecen_sure>20){
            kalinan_bolum++;
            kalinan_dakika = 0;
            cout << endl <<"Bölüm Sonu Diger Bölümü İzlemek İcin Aciniz..";
            break;
        }
        if(gecen_sure<20){
            kalinan_dakika = 0;
            kalinan_dakika = kalinan_dakika + gecen_sure;
        }
    }

}

void gmail::sifre_degistir() {
    TTB TTB1;
    int yenisifre;
    cout << "Geçerli Sifrenizi Giriniz::";
    cin >> girilen_sifre;
    int sonuc=TTB1.Sifre_Kontol(girilen_sifre,kayitli_sifre);
    if(sonuc == 1){
        cout << "Yeni Sifrenizini Giriniz:"<<endl;
        cin >> yenisifre;
        kayitli_sifre = yenisifre;
    }
    else
        cout << "Yanlıs Giriş Yaptınız..."<<endl;
}

void gmail::mail_gonder() {
    cout << "Mail Gönderilicek Eposta Adresi:";
    cin >> gonderilicek_mail_adresi;
    cout << "-------------------------"<<endl;
    cout << "Mail icerigi"<<endl;
    cout << "-------------------------"<<endl;
    cin >> gonderilicek_mail_icerigi;
    cout << "--------------------------"<<endl;

}

void gmail::bilgiler() {
    cout << gonderilicek_mail_adresi<<endl;
    cout << "-------------------------"<<endl;
    cout << gonderilicek_mail_icerigi<<endl;
    cout << "-------------------------"<<endl;
    cout << gonderilen_mail_zamani<<endl;
}












