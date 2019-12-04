#include <iostream>
#include "TTB.h"
#include <string>

using namespace std;


int main() {
    Bilgisayar Bilgisayar1;
    Telefon Telefon1;
    TV Tv1;
    Whatsapp Whatsapp1;
    netflix netflix1;
    gmail gmail1;
    while(1){
        cout << "----------------------------"<<endl;
        cout << "TELEFON ICIN 1"<<endl;
        cout << "BILGISAYAR ICIN 2"<<endl;
        cout << "TV ICIN 3"<<endl;
        cout << "ÇIKMAK ICIN 4"<<endl;
        cout << "----------------------------"<<endl;
        int secenek1;
        cout << "SECENEGİ GİRİNİZ::";
        cin >> secenek1;
        system("cls");
        if(secenek1==1){
            int secenek2;
            cout << "----------------------------"<<endl;
            cout << "Whatsapp icin 1"<<endl;
            cout << "Netflix icin 2"<<endl;
            cout << "Gmail icin 3"<<endl;
            cout << "Sifre Degistirmek için 4"<<endl;
            cout << "Rehberi görüntülemek için 5"<<endl;
            cout << "----------------------------"<<endl;
            cout << "SECENEGI GIRINIZ::";
            cin >> secenek2;
            system("cls");
            if(secenek2==1){
                int secenek3;
                for (int i = 0; i <3 ; ++i)
                {
                    cout << "----------------------------"<<endl;
                    cout << "Yeni Mesaj Yollamak icin 1"<<endl;
                    cout << "Mesajları Görüntülemek icin 2"<<endl;
                    cout << "Sifre Degistirmek icin 3"<<endl;
                    cout << "Cikis yapmak icin 4"<<endl;
                    cout << "----------------------------"<<endl;
                    cout << "SECENEGI GIRINIZ::";
                    cin >> secenek3;
                    if(secenek3==1){
                        Whatsapp1.son_gorulme = Telefon1.gecen_zaman();
                        Whatsapp1.mesaj_yolla();
                        system("PAUSE");
                    }
                    if(secenek3==2){
                        Whatsapp1.mesajlari_goruntule();
                        system("PAUSE");
                    }
                    if(secenek3==3){
                        Whatsapp1.sifre_degistir();
                        system("PAUSE");
                    }
                    if(secenek3==4){
                        break;
                    }
                }

            }
            if(secenek2==2){
                while (1){
                    int secenek3;
                    netflix1.son_giris_tarihi = Telefon1.gecen_zaman();
                    cout << "----------------------------"<<endl;
                    cout << "Dizi Bilgileri için 1"<<endl;
                    cout << "Dizi izlemek için 2"<<endl;
                    cout << "Sifre degistirmek için 3"<<endl;
                    cout << "cıkmak icin 4"<<endl;
                    cout << "--------------------------"<<endl;
                    cin >> secenek3;
                    if(secenek3==1){
                        netflix1.dizi_bilgiler();
                    }
                    if(secenek3==2){
                        netflix1.dizi_izlemeye_basla();
                    }
                    if(secenek3==3){
                        netflix1.sifre_degistir();
                    }
                    if(secenek3==4){
                        break;
                    }

                }

            }
            if(secenek2==3){
                while(1){
                    gmail1.gonderilen_mail_zamani = Telefon1.gecen_zaman();
                    int secenek3;
                    cout << "------------------------"<<endl;
                    cout << "Mail Göndermek için 1" << endl;
                    cout << "Bilgiler icin 2"<<endl;
                    cout << "Sifre Degistirmek için 3"<<endl;
                    cout << "Cikmak icin 4"<<endl;
                    cout << "------------------------"<<endl;
                    cin >> secenek3;
                    if(secenek3==1){
                        gmail1.mail_gonder();
                    }
                    if(secenek3==2){
                        gmail1.bilgiler();
                    }

                    if(secenek3==3){
                        gmail1.sifre_degistir();
                    }
                    if(secenek3==4){
                        break;
                    }
                }


            }
            if(secenek2==4){
                Telefon1.sifre_degistir();
            }
            if(secenek2==5){
                Telefon1.rehber_goruntuleme();
            }

        }
        if(secenek1==2){
            int secenek2;
            cout << "----------------------------"<<endl;
            cout << "Whatsapp icin 1"<<endl;
            cout << "Netflix icin 2"<<endl;
            cout << "Gmail icin 3"<<endl;
            cout << "Bilgisayarın sifresini degistirme"<<endl;
            cout << "----------------------------"<<endl;
            cout << "SECENEGI GIRINIZ::";
            cin >> secenek2;
            system("cls");
            if(secenek2==1){
                int secenek3;
                for (int i = 0; i <3 ; ++i)
                {
                    cout << "----------------------------"<<endl;
                    cout << "Yeni Mesaj Yollamak icin 1"<<endl;
                    cout << "Mesajları Görüntülemek icin 2"<<endl;
                    cout << "Sifre Degistirmek icin 3"<<endl;
                    cout << "Cikis yapmak icin 4"<<endl;
                    cout << "----------------------------"<<endl;
                    cout << "SECENEGI GIRINIZ::";
                    cin >> secenek3;
                    if(secenek3==1){
                        Whatsapp1.son_gorulme = Bilgisayar1.gecen_zaman();
                        Whatsapp1.mesaj_yolla();
                        system("PAUSE");
                    }
                    if(secenek3==2){
                        Whatsapp1.mesajlari_goruntule();
                        system("PAUSE");
                    }
                    if(secenek3==3){
                        Whatsapp1.sifre_degistir();
                        system("PAUSE");
                    }
                    if(secenek3==4){
                        break;
                    }
                }

            }
            if(secenek2==2){
                while (1){
                    int secenek3;
                    netflix1.son_giris_tarihi = Telefon1.gecen_zaman();
                    cout << "----------------------------"<<endl;
                    cout << "Dizi Bilgileri için 1"<<endl;
                    cout << "Dizi izlemek için 2"<<endl;
                    cout << "Sifre degistirmek için 3"<<endl;
                    cout << "cıkmak icin 4"<<endl;
                    cout << "--------------------------"<<endl;
                    cin >> secenek3;
                    if(secenek3==1){
                        netflix1.dizi_bilgiler();
                    }
                    if(secenek3==2){
                        netflix1.dizi_izlemeye_basla();
                    }
                    if(secenek3==3){
                        netflix1.sifre_degistir();
                    }
                    if(secenek3==4){
                        break;
                    }

                }
            }
            if(secenek2==3){
                while(1){
                    gmail1.gonderilen_mail_zamani = Telefon1.gecen_zaman();
                    int secenek3;
                    cout << "------------------------"<<endl;
                    cout << "Mail Göndermek için 1" << endl;
                    cout << "Bilgiler icin 2"<<endl;
                    cout << "Sifre Degistirmek için 3"<<endl;
                    cout << "Cikmak icin 4"<<endl;
                    cout << "------------------------"<<endl;
                    cin >> secenek3;
                    if(secenek3==1){
                        gmail1.mail_gonder();
                    }
                    if(secenek3==2){
                        gmail1.bilgiler();
                    }

                    if(secenek3==3){
                        gmail1.sifre_degistir();
                    }
                    if(secenek3==4){
                        break;
                    }
                }

            }
            if(secenek2==4){
                Bilgisayar1.sifre_degistir();
            }
        }
        if(secenek1==3){
            int secenek2;
            cout << "----------------------------"<<endl;
            cout << "Netflix icin 1 "<<endl;
            cout << "Tv Sifre Degistirmek için 2"<<endl;
            cout << "----------------------------"<<endl;
            cout << "SECENEGI GIRINIZ::";
            cin >> secenek2;
            system("cls");
            if(secenek1==1){
                while (1){
                    int secenek3;
                    netflix1.son_giris_tarihi = Telefon1.gecen_zaman();
                    cout << "----------------------------"<<endl;
                    cout << "Dizi Bilgileri için 1"<<endl;
                    cout << "Dizi izlemek için 2"<<endl;
                    cout << "Sifre degistirmek için 3"<<endl;
                    cout << "cıkmak icin 4"<<endl;
                    cout << "--------------------------"<<endl;
                    cin >> secenek3;
                    if(secenek3==1){
                        netflix1.dizi_bilgiler();
                    }
                    if(secenek3==2){
                        netflix1.dizi_izlemeye_basla();
                    }
                    if(secenek3==3){
                        netflix1.sifre_degistir();
                    }
                    if(secenek3==4){
                        break;
                    }

                }

            }
            if(secenek2==2){
                Tv1.sifre_degistir();
            }
        }
        if(secenek1==4){
            break;
        }
    }
}