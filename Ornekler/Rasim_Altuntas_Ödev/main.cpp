#include <iostream>
#include <string>
#include <fstream>


short int secenek;
int kayit_sayisi = 0;
using namespace std;
int dosya_yazdirma(string kullanici_adi,string sifre,string sifre_tekrar,string eposta,string isim,string soyisim);//dosya_yazdirma fonksiyonunu prototipi tanımlandı
int kullanici_sifre_kontrol(string sifre,string sifre_1);//kullanıcıdan gelen şifrelerin aynı oldugunu kontrol eden kullanici_sifre_kontrol fonksiyonu tanımlandı
int admin_control(string kullanici_adi,string kullanici_sifre);
void dosya_okuma(string kullanici_ismi);
void kullanici_bilgileri_guncelleme(string kullanici_adi,string sifre,string sifre_tekrar,string eposta,string isim,string soyisim,int satir_sayisi);


//Kayıt Bilgilerini İçeren Class oluşturulup heryerden erişim saglanmasını için public in icine istenen bilgiler degişken olarak tanımladın
class sistem_kayit_bilgileri{
public:
    string kullanici_adi;
    string sifre;
    string sifre_tekrar;
    string eposta;
    string isim;
    string soyisim;

};


//admin dogrulamada kullanılacak class oluşturuldu
//admin dogrulamada kullanıcıdan istenen veriler dışarıdan erişilebilsin diye public kısmına yazıldı
//admin dogrulamada kullanılacak sisteme kayıtlı degişkenler dışarıdan erişilemesin diye private kısmına yazıldı.
class admin_panel{
public:
    string kullanici_admin;
    string kullanici_sifre;
    int control_function(string kullanici_admin,string kullanici_sifre);//admin dogrulamada kullanılacak fonksiyon prototipi oluşturuldu
private:
    string admin = "weysland";//sabit bilgiler
    string password = "123456789";

};

int admin_panel::control_function(string kullanici_admin,string kullanici_sifre){
    if(kullanici_admin == admin && kullanici_sifre == password)
        //dışarıdan giren veriler sistemde bulunan verilerle eşleşmesi durumunda ve kapısı kullanırak sistemin adminin onaylanması
        return 1;
    else
        return 0;
}



int main(){
    int i = 0;
    int toplam_sayi=5;
    int admin_control;
    for(i=0;i<toplam_sayi;i++){


        cout << "|-----------------------------------|"<<endl;
        cout << "|KAYIT OLMAK ICIN 1 YAZINIZ         |"<<endl;
        cout << "|-----------------------------------|"<<endl;
        cout << "|ADMIN PANELI ICIN 2 YAZINIZ        |"<<endl;
        cout << "|-----------------------------------|"<<endl;
        cout << "|-----------------------------------|"<<endl;
        cout << "|SECENEGI GIRINIZ:";
        cin >> secenek;

        if(secenek == 1){
            sistem_kayit_bilgileri yeni_kayit;//kayıt olması için kullanıcıdan istenen verilerin girilmesi için sistem_kayit_bilgileri degişkeninde yeni_kayit adlı degişken oluşturuldu.
            cout << "Kullanici Adiniz:";
            cin >> yeni_kayit.kullanici_adi;
            cout << "Sifreniz:";
            cin >> yeni_kayit.sifre;
            cout << "Sifre Tekrar:";
            cin >> yeni_kayit.sifre_tekrar;
            cout << "Isim:";
            cin >> yeni_kayit.isim;
            cout << "Soyisim:";
            cin >> yeni_kayit.soyisim;
            cout << "Epostanizi Giriniz:";
            cin >> yeni_kayit.eposta;

            int sifre_kontrol = kullanici_sifre_kontrol(yeni_kayit.sifre,yeni_kayit.sifre_tekrar);
            //kullanıcının sifrelerinin aynı olmasını kontrol etmek için fonksiyon çağırıldı

            if (sifre_kontrol == 1){
                int kayit_basarili = dosya_yazdirma(yeni_kayit.kullanici_adi,yeni_kayit.sifre,yeni_kayit.sifre_tekrar,yeni_kayit.isim,yeni_kayit.soyisim,yeni_kayit.eposta);
                //dosya yazdırma fonksiyonu çagırıldı.
                cout << "Kayıt Başarili"<<endl;
            }
            else
                cout << "Şifreleriniz Uyuşmuyor Tekrar Deneyiniz...." << endl;


        }

        if (secenek == 2){
            admin_panel admin;
            cout << "Admin Kullanıcı Adınızı Giriniz:";
            cin >> admin.kullanici_admin;
            cout << "Admin Şifrenizi Giriniz : ";
            cin >> admin.kullanici_sifre;
            int admin_control = admin.control_function(admin.kullanici_admin,admin.kullanici_sifre);
            if (admin_control == 1){
                while(1){
                    string aranacak_kullanici_ismi;
                    cout << "Aranıcak Kullanıcı İsmini Giriniz:";
                    cin >> aranacak_kullanici_ismi;
                    dosya_okuma(aranacak_kullanici_ismi);
                    break;

                }



            }
            else{
                cout << "Giris Basarisiz"<<endl;
            }

        }

    }


};

int kullanici_sifre_kontrol(string sifre,string sifre_1){
    if (sifre == sifre_1)//şifre ve şifre tekrar karşılaştırması
        return 1;

    else
        return 0;
}



int dosya_yazdirma(string kullanici_adi,string sifre,string sifre_tekrar,string eposta,string isim,string soyisim){
    ofstream kayit;
    kayit.open("new.txt",ios::app);//new.txt dosyasının içine gidip en son satıra veri yazılmasını sağlar ios::app komutu veri ekleme komutudur.
    kayit << kullanici_adi << "      "<< sifre << "       "<< sifre_tekrar << "      "<< eposta << "      "<< isim <<"      "<< soyisim << "       "<< endl;
    kayit_sayisi++;
    secenek = 0;
    kayit.close();
    return 1;
}

int admin_control(string kullanici_adi,string kullanici_sifre){
    admin_panel admin;
    int admin_control = admin.control_function(kullanici_adi,kullanici_sifre);
    if(admin_control == 1){
        return 1;
    }
    else{
        return 0;
    }

}

void dosya_okuma(string kullanici_ismi){
    string ID;
    string sifre;
    string sifre_tekar;
    string isim;
    string soyisim;
    string eposta;
    string yeni_eposta;
    string yeni_sifre;
    int satir_sayisi = 0;
    int gidilecek_satir;
    int secenek;
    ifstream dosya_oku;
    dosya_oku.open("new.txt",ios::in);

    while(1){
        dosya_oku >> ID ;
        if (kullanici_ismi == ID){
            dosya_oku >> sifre;
            dosya_oku >> sifre_tekar;
            dosya_oku >> isim;
            dosya_oku >> soyisim;
            dosya_oku >> eposta;
            cout << "Kullanici_Bulundu"<<endl;
            cout << "|-----------------------------|" << endl;
            cout << "|sifre degiştirmek için 1     |" << endl;
            cout << "|eposta degiştirmek için 2    |" << endl;
            cout << "|çıkmak için 0                |" << endl;
            cout << "|-----------------------------|" << endl;
            cout << "Giriniz:";
            cin >> secenek;
            cout << endl;
            if (secenek == 1){
                cout << "Yeni Sifreyi giriniz:";
                cin >> yeni_sifre;
                dosya_yazdirma(ID,yeni_sifre,yeni_sifre,isim,soyisim,eposta);
                break;

            }

            else if (secenek == 2){
                cout << "Yeni Epostayı Giriniz:";
                cin >> yeni_eposta;
                dosya_yazdirma(ID,sifre,sifre_tekar,isim,soyisim,yeni_eposta);
                cout << "Dosya_Başarılı";
                break;
            }

            else if (secenek == 0){
                cout << "Çıkılıyor";
                break;
            }

        }
        else if(dosya_oku.eof() == 1){
            cout << "Kulanici Bulunamadı"<<endl;
            break;

        }
        satir_sayisi++;
    }

}








