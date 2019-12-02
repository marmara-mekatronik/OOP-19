//
// Created by WINDOWS on 30.11.2019.
//

#ifndef KUTUPHANE_OLUSTURMA_TTB_H
#define KUTUPHANE_OLUSTURMA_TTB_H

#include <string>
#include <chrono>
double gecen_sureyi_hesapla(std::chrono::system_clock baslangic);
std::chrono::time_point<std::chrono::system_clock> gecen_sureyi_baslatma();
class TTB{
public:
    int Sifre_Kontol(int sifre_1,int sifre_2);
};

class Bilgisayar:public TTB{
public:
    int girilenSifre;
    void kullanicidan_sifre_alma();
    void sifre_degistir();
    std::string gecen_zaman();

protected:
    int kayitli_sifre=0000;
};

class Telefon:public TTB{
public:
    std::string rehber[3]={"11111111111","12345678910","10987654321"};
    void rehber_goruntuleme();
    int girilenSifre;
    void kullanicidan_sifre_alma();
    void sifre_degistir();
    std::string gecen_zaman();

protected:
    int kayitli_sifre=0000;

};
class TV:public TTB{
public:
    int girilenSifre;
    void kullanicidan_sifre_alma();
    void sifre_degistir();
    std::string gecen_zaman();

protected:
    int kayitli_sifre=0000;
};

class Whatsapp:public Bilgisayar,public Telefon{
public:
    std::string son_gorulme;
    char sonmesaj[100]="Merhaba";
    char son_mesaj_1[100]="Nasılsın";
    char son_mesaj_2[100]="İyimisin";
    char yollanicak_mesaj[250];
    void mesaj_yolla();
    void mesajlari_goruntule();
    void sifre_degistir();
    int girilen_sifre;
private:
    int kayitli_sifre=0000;

};
class netflix:public Telefon,public Bilgisayar,public TV{
public:
    std::string en_son_izlenilen_dizi="Peaky Blinders";
    std::string onerilen_dizi="ForAllManking";
    int kalinan_bolum = 1;
    int kalinan_dakika = 0;
    std::string son_giris_tarihi;
    void dizi_izlemeye_basla();
    void dizi_bilgiler();
    void sifre_degistir();
    int girilen_sifre;
private:
    int kayitli_sifre=0000;

};

class gmail:public Telefon,public Bilgisayar{
public:
    std::string gonderilen_mail_zamani;
    char mail_adresi[50]="Rasim0042@gmail.com";
    char gonderilicek_mail_adresi[250];
    std::string gonderilicek_mail_icerigi;
    void bilgiler();
    void mail_gonder();
    void sifre_degistir();
    int girilen_sifre;
private:
    int kayitli_sifre=0000;

};



#endif //KUTUPHANE_OLUSTURMA_TTB_H
