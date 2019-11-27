#include <iostream>
#include <string>
using namespace std;
//sınıf oluşturuluyor.
class KUMANDA{
public:
        void tv_ac();
        void tv_kapat();
        void tv_durum_ogren();
        void ses_ayarlari();
        void kanal_ekleme();
        void kanal_sayisi_ogrenme();

private:
    string tv_durum="kapali";
    int ses_seviyesi=0;
    string kanal_listesi [20] = {"trt ","star ","show ","Atv "};
    int kanal_sayisi=4;
};
//sınıf oluşturuuldu,
//public ve private değişkenler classın içinde tanımlandı,
//class fonksiyonlarının prototiplemleeri yapıldı.
void KUMANDA::kanal_ekleme() {
    if (tv_durum=="acik") {
        cout << "eklemek istediğiniz kanalları tek tek giriniz,bittiginde q basiniz" << endl;
        char q;
        int s;
        string a;
        for (int i = 4; i < 16; i++) {
            cin >> a;
            if (a == "q") {
                cout << "kanal ekleme ayarlarindan cikis yapiliyor.. menuye donuyorsunuz" << endl;
                break;
            } else {
                kanal_listesi[i] = a;
                s = i+1;
            }
        }
        kanal_sayisi = s;
    }else{
        cout<<"önce tv'yi acmalisiniz!!!"<<endl;

    }

}
void KUMANDA::tv_durum_ogren() {
    cout<<"----------------"<<endl;
    cout<<"Tv anlik bilgiler:\n**************"<<endl;
    cout<<tv_durum<<"\n**************"<<endl;
    if (tv_durum=="acik"){
        cout<<"ses seviyesi"<<ses_seviyesi<<"\n**************"<<endl;
        cout<<"kanal sayisi"<<kanal_sayisi<<"\n**************"<<endl;
        cout<<"KANAL LiSTESi:"<<endl;
        for (int i = 0; i <=kanal_sayisi ; i++) {
            cout<<"kanal"<<(i+1)<<": "<<kanal_listesi[i]<<endl;
        }

    } cout<<"----------------"<<endl;
}//tv nin acikmi kapalimi olduğunu gösteren fonksiyon eklemesi yapıldı
void KUMANDA::tv_ac() {
    if(tv_durum=="kapali") {
        tv_durum = "acik";
        cout << "tv aciliyor..\n"  << endl;
    }
    else{
        cout<<"tv zaten acik"<<endl;
    }
}//televizyonu açmak için fonksiyon eklemesi yapıldı
void KUMANDA::tv_kapat() {
       if(tv_durum=="acik"){
           tv_durum="kapali";
           cout<< "tv kapatiliyor..\n durum:"<<tv_durum<<endl;
       }else{
           cout<<"tv zaten kapali"<<endl;
       }
}// televizyon açık ise eğer kapatmak için fonksiyon eklemesi yapıldı.
void KUMANDA::ses_ayarlari() {
    if (tv_durum=="acik"){
        cout<<"Suan ses seviyesi:"<<ses_seviyesi<<"\nSES SECENEKLERI:\n arttirmak icin '+', eksiltmek icin '-' basin.\n cikmak istiyorsaniz 'q basin'"<<endl;
        char a;
        int i;
        for (i=0;i<=60;i++){

            cin >> a;
            if (a == '+') {
                ses_seviyesi++;
                cout<<"ses seviyesi:"<<ses_seviyesi<<endl;
            } else if (a == '-') {
                ses_seviyesi--;
                cout<<"ses seviyesi:"<<ses_seviyesi<<endl;
            } else if (a == 'q') {
                cout << "ses ayarlarindan cikis yapiliyor menuye donuyorsunuz" << endl;
                break;
            }else {
                cout<<"sadece gösterilen tuslara basiniz"<<endl;
            }
        }

    }else {
        cout<<"önce tv'yi acmalisiniz!!!"<<endl;
    }
}
void KUMANDA::kanal_sayisi_ogrenme() {
    if (tv_durum=="acik"){
        cout<<"kanal sayisi:"<<kanal_sayisi<<endl;
     }else
        cout<<"önce tv'yi acmalisiniz!!!"<<endl;
}

int main() {
    KUMANDA kumanda;
    int a;
    char q;
    cout<<"-----------------------------------------------------\n   **** TELEVIZYON UYGULAMASINA HOSGELDINIZ ****\n-----------------------------------------------------"<<endl;
    cout<<"Kumanda Islemleri:\n"
          "1.TV ACMA\n"
          "2.TV KAPATMA\n"
          "3.SES VERME\n"
          "4.KANAL SAYISI OGRENME\n"
          "5.KANAL EKLEME\n"
          "6.TV DURUM OGRENME\n-----------------------------------------------------\n"<<endl;

    for (int i=0; true;i++) {
         cout << "\n-----------------------------------------------------\nYapmak istediginiz islemi seciniz::\nCikmak isterseniz 'q' ya basin\n-----------------------------------------------------\n " << endl;
         cin>>a;
         if (a=='q') {
             cout << "program sonlandiriliyor" << endl;
             break;
         }else
             {
             switch (a) {
                     case 1:
                         kumanda.tv_ac();
                         break;
                         case 2:
                         kumanda.tv_kapat();
                         break;
                     case 3:
                         kumanda.ses_ayarlari();
                         break;
                     case 4:
                         kumanda.kanal_sayisi_ogrenme();
                         break;
                     case 5:
                         kumanda.kanal_ekleme();
                         break;
                     case 6:
                         kumanda.tv_durum_ogren();
                         break;
                     default:
                         cout<<"HATA gecersiz islem secimi!!\n"<<endl;
                     }

         }
     }
    return 0;
}