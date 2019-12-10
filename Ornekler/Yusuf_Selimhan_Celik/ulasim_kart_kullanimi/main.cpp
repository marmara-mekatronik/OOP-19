#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;
int a, b,i = 0;

//ulasim adında bir sınıf oluşturuldu.
class ulasim{
public:

    void ucret(double tutar);
    void aktarma(double tutar1);
    int kontrol();
// korumalı sınıf değerleri burada oluşturuldu.
/* Protected bloğunda bulunan değerler alt sınıflar tarafından kullanılabilen değerlerdir. Sınıf içinde olmayan fonksiyonlar
 * tarafından kullanılamazlar. */
protected:

    double bakiye=100;
    int tamBilet = 1;
    int ogrenciBilet = 0;
};

/* ulasim sınıfımızın fonksiyon ve değişkenlerini kullanabilen metrobus adında bir alt sınıf oluşturuldu.
 * Sınıf içinde tarife değerleri bulunmaktadır. */
class metrobus:public ulasim{
public:
    double tam_ucret=3.85;
    double ogrenci_ucret=1.25;
};

/* ulasim sınıfımızın fonksiyon ve değişkenlerini kullanabilen otobus adında bir alt sınıf oluşturuldu.
 * Sınıf içinde tarife değerleri bulunmaktadır. */

class otobus:public ulasim{
public:
    double tam_ucret=2.60;
    double ogrenci_ucret=1.25;
    double indirim_ogrenci = 0.55;
    double indirim_tam = 1.30;
};

/* ulasim sınıfımızın fonksiyon ve değişkenlerini kullanabilen marmaray adında bir alt sınıf oluşturuldu.
 * Sınıf içinde tarife değerleri bulunmaktadır. */

class marmaray:public ulasim{
public:
    double tam_ucret=5.20;
    double ogrenci_ucret = 2.50;
};

/* ulasim sınıfımızın fonksiyon ve değişkenlerini kullanabilen metro adında bir alt sınıf oluşturuldu.
 * Sınıf içinde tarife değerleri bulunmaktadır. */

class metro:public ulasim{
public:
    double tam_ucret=2.60;
    double ogrenci_ucret=1.25;
    double indirim_ogrenci = 0.55;
    double indirim_tam = 1.30;
};

/* ulasim sınıfımızın fonksiyon ve değişkenlerini kullanabilen vapur adında bir alt sınıf oluşturuldu.
 * Sınıf içinde tarife değerleri bulunmaktadır. */

class vapur:public ulasim{
public:
    double tam_ucret=2.60;
    double ogrenci_ucret=1.25;
    double indirim_ogrenci = 0.55;
    double indirim_tam = 1.30;
};
/* ulasim sınıfının ucret fonksiyonu tanımlanmıştır. Fonksiyonun görevi aktarmasız olarak alınan
 * ücret tarifesini, kart bakiyesinden düşecektir. */

void ulasim::ucret(double tutar) {
    bakiye=bakiye-tutar;
    cout << "Tarife tutarı : " << tutar<<endl;
    cout << "Kalan bakiyeniz : "<< bakiye<< endl;
    i=0;

}

/* ulasim sınıfının aktarma fonksiyonu tanımlanmıştır. Fonksiyonun görevi aktarma tarifesine uygun
 * olarak bakiyenizden tarife değerini düşmektir. Eğer 5 ve üzeri aktarma yaparsanız aktarma tutarını
 * 0,40 değerine sabitleyecektir. */

void ulasim::aktarma(double tutar1) {
    i++;
    if(i >= 5 ){
        bakiye=bakiye-0.40;
        cout << "Tarife tutarı : " << "0.40"<<endl;
        cout << "Kalan bakiyeniz : "<< bakiye<< endl;
    }
    if(i <5){
        bakiye = bakiye - tutar1;
        cout << "Tarife tutarı : " << tutar1<<endl;
        cout << "Kalan bakiyeniz : "<< bakiye<< endl;
    }

}

/* ulasim sınıfının kontrol adlı fonksiyonu tanımlanmıştır. Fonksiyonun görevi kart sahibinin Tam ya da Öğrenci
 * tarifesinden hangisini kullanacağını kaydetmektir. */

int ulasim::kontrol() {
    cout << "Kart bilginizi girin..: " ;
    cout << "Tam bilet ise 1'e basınız." << endl;
    cout << "Öğrenci bileti ise 0'ye basınız." << endl ;
    cin >> a ;
    if (a == tamBilet)
        return 1;
    else if (a == ogrenciBilet)
        return 0;
}
/* arac_secimi fonksiyonunun görevi kişinin bineceği vasıtayı seçmesini sağlamak ve seçtiği vasıtayı bir
 * değerde tutmaktır. */

int arac_secimi(){
    cout << "Araç Seçimini Yapınız..."<<endl;
    cout << "1. Otobüs               "<<endl;
    cout << "2. Metro                "<<endl;
    cout << "3. Vapur                " <<endl;
    cout << "4. Marmaray             "<<endl;
    cout << "5. Metrobüs             "<<endl;
    cin >> b;
    return b;
}

/* zaman_fonksiyon fonksiyonunun görevi başlangıç zamanında kod akışını durdurarak bir parametre girilene kadar
 * olan zamanı bir değişkene kaydetmesidir. */

double zaman_fonksiyon(){
    chrono::time_point<std::chrono::system_clock> d_basla, d_son;
    d_basla = std::chrono::system_clock::now();

    system("PAUSE");

    d_son = std::chrono::system_clock::now();

    chrono::duration<double> gecen_zaman = d_son - d_basla;
    cout << gecen_zaman.count();
    return gecen_zaman.count();

};



int main() {
    // Vasıta tarifelerini kullanabilmek için alt sınıfların nesneleri oluşturulmuştur.

    metrobus metrobus_1;
    otobus otobus_1;
    metro metro_1;
    marmaray marmaray_1;
    vapur vapur_1;
    ulasim ulasim_1;

    int kontrol = ulasim_1.kontrol();
// Sınıf fonksiyonları ilk değer için değerler bir seferlik altta verilecek olan sonsuz döngü dışında aktarmasız olarak kullanıldı.
    if(kontrol==1){
        int arac = arac_secimi() ;
        if(arac == 1) {
            ulasim_1.ucret(otobus_1.tam_ucret);
        }
        if(arac == 2) {
            ulasim_1.ucret(metro_1.tam_ucret);
        }
        if(arac == 3) {
            ulasim_1.ucret(vapur_1.tam_ucret);

        }
        if(arac == 4) {
            ulasim_1.ucret(marmaray_1.tam_ucret);

        }
        if(arac == 5){
            ulasim_1.ucret(metrobus_1.tam_ucret);
        }

    }

    if(kontrol == 0) {
        int arac = arac_secimi() ;
        if(arac == 1) {
            ulasim_1.ucret(otobus_1.ogrenci_ucret);
        }
        if(arac == 2) {
            ulasim_1.ucret(metro_1.ogrenci_ucret);
        }
        if(arac == 3) {
            ulasim_1.ucret(vapur_1.ogrenci_ucret);

        }
        if(arac == 4) {
            ulasim_1.ucret(marmaray_1.ogrenci_ucret);

        }
        if(arac == 5){
            ulasim_1.ucret(metrobus_1.ogrenci_ucret);
        }

    }
    system("PAUSE");
    system("cls");
// Sonsuz bir döngü içinde araçlar tarifeye göre bakiyeden gerekli ücreti kesecektir.
    while(1){


        //chrono değişkeninde geçen zaman tutulmaktadır.
        double chrono = zaman_fonksiyon();
        //Eğer geçen zaman 20 saniyeden az olursa aktarma tarifeleri çalışacaktır.

        if(chrono < 20){
        if(kontrol==1){
        int arac = arac_secimi() ;
        if(arac == 1) {
            ulasim_1.aktarma(otobus_1.indirim_tam);
        }
            if(arac == 2) {
                ulasim_1.aktarma(metro_1.indirim_tam);
            }
            if(arac == 3) {
                ulasim_1.aktarma(vapur_1.indirim_tam);

            }
            if(arac == 4) {
                ulasim_1.aktarma(marmaray_1.tam_ucret);

            }
            if(arac == 5){
                ulasim_1.aktarma(metrobus_1.tam_ucret);
            }

        }

        if(kontrol == 0) {
            int arac = arac_secimi() ;
            if(arac == 1) {
                ulasim_1.aktarma(otobus_1.indirim_ogrenci);
            }
            if(arac == 2) {
                ulasim_1.aktarma(metro_1.indirim_ogrenci);
            }
            if(arac == 3) {
                ulasim_1.aktarma(vapur_1.indirim_ogrenci);

            }
            if(arac == 4) {
                ulasim_1.aktarma(marmaray_1.ogrenci_ucret);

            }
            if(arac == 5){
                ulasim_1.aktarma(metrobus_1.ogrenci_ucret);
            }

        }

        }

        //Eğer geçen zaman 20 saniyeden fazla olursa normal kullanım tarifeleri geçerli olacaktır.
      else {

            if(kontrol==1){
                int arac = arac_secimi() ;
                if(arac == 1) {
                    ulasim_1.ucret(otobus_1.tam_ucret);
                }
                if(arac == 2) {
                    ulasim_1.ucret(metro_1.tam_ucret);
                }
                if(arac == 3) {
                    ulasim_1.ucret(vapur_1.tam_ucret);

                }
                if(arac == 4) {
                    ulasim_1.ucret(marmaray_1.tam_ucret);

                }
                if(arac == 5){
                    ulasim_1.ucret(metrobus_1.tam_ucret);
                }

            }

            if(kontrol == 0) {
                int arac = arac_secimi() ;
                if(arac == 1) {
                    ulasim_1.ucret(otobus_1.ogrenci_ucret);
                }
                if(arac == 2) {
                    ulasim_1.ucret(metro_1.ogrenci_ucret);
                }
                if(arac == 3) {
                    ulasim_1.ucret(vapur_1.ogrenci_ucret);

                }
                if(arac == 4) {
                    ulasim_1.ucret(marmaray_1.ogrenci_ucret);

                }
                if(arac == 5){
                    ulasim_1.ucret(metrobus_1.ogrenci_ucret);
                }

            }


      }
      system("PAUSE");
      system("cls");



    }

    return 0;
}