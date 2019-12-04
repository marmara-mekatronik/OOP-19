#include <iostream>
#include <chrono>
#include <ctime>


using namespace std;
//birim fiyatların alındığı site : https://www.enerjiportali.com/elektrik-fiyatlari-8/

//guc_hesabi adında bir class oluşturuldu ve alt classlar tanımlandı.
class guc_hesabi{
public:
    ~guc_hesabi();
    guc_hesabi();
    float kullanim_sresi;
    void guc_hesaplama();
    float saniyede_harcanan_guc;
    float toplam_harcanan_guc;
    void kullanim_bilgileri();
    /*sanayi alt classının içerisine private kısmına sanayi_birim_tutar tanımladı ve bu private kısmına erişebilrmesi için
    sanayi_ucret_hesaplama fonksiyonu tanımlandı ve girdi olarak sistemin harcadıgını güç degeri gönderildi*/
    class sanayi{
    public:
        sanayi();
        inline void sanayi_ucret_hesaplama(float toplam_harcanan_guc);
    private:
        float sanayi_birim_tutar = 	49.3673;

    };

    /*ticarethane alt classının içerisine private kısmına ticarethane_birim_tutar tanımladı ve bu private kısmına erişebilrmesi için
    ticarethane_ucret_hesaplama fonksiyonu tanımlandı ve girdi olarak sistemin harcadıgını güç degeri gönderildi*/
    class ticarethane{
    public:
        ticarethane();
        inline void ticarethane_ucret_hesaplama(float toplam_harcanan_guc);
    private:
        float ticarethane_birim_tutar = 53.9014;

    };
    /*mesken alt classının içerisine private kısmına mesken_birim_tutar tanımladı ve bu private kısmına erişebilrmesi için
    mesken_ucret_hesaplama fonksiyonu tanımlandı ve girdi olarak sistemin harcadıgını güç degeri gönderildi*/
    class mesken{
    public:
        mesken();
        inline void mesken_ucret_hesaplama(float toplam_harcanan_guc);
    private:
        float mesken_birim_tutar = 	36.6804;

    };
    /*tarimsal_sulama alt classının içerisine private kısmına tarimsal_sulama_birim_tutar tanımladı ve bu private kısmına erişebilrmesi için
    tarimsal_ucret_hesaplama fonksiyonu tanımlandı ve girdi olarak sistemin harcadıgını güç degeri gönderildi*/
    class tarimsal_sulama{
    public:
        tarimsal_sulama();
        inline void tarimsal_ucret_hesaplama(float toplam_harcanan_guc);
    private:
        float tarimsal_sulama_birim_tutar = 48.7283;

    };

private:
    float amper;
    float sebeke_gerilimi;
};
//guc_hesabi classının yapıcı fonksiyonu oluşturuldu...
guc_hesabi::guc_hesabi() {
    cout << "Program Hazirlaniyor Lutfen Bekleyiniz:"<<endl;
}
//guc_hesabı nın alt class ı olan sanayi yapıcı fonksiyonu oluşturuldu...
guc_hesabi::sanayi::sanayi() {
    cout << "Kullanim parametreleri aliniyor"<<endl;
}

void guc_hesabi::sanayi::sanayi_ucret_hesaplama(float kWh) {
    cout << "*********************************************************"<<endl;
    cout << "Kullanim Bedeliniz:"<<kWh*sanayi_birim_tutar<<" kurus"<<endl;
    //sanayi birim tutar ve kullanım miktarı (kWh) çarpılarak kullanım bedeli hesaplandı...
}
//ticarethane classının yapıcı fonksiyonu oluşturuldu...
guc_hesabi::ticarethane::ticarethane() {
    cout << "Kullanım parametreleri aliniyor"<<endl;
}

void guc_hesabi::ticarethane::ticarethane_ucret_hesaplama(float kWh) {
    cout << "*********************************************************"<<endl;
    cout <<"Kullanim Bedeliniz:"<<kWh*ticarethane_birim_tutar<<" kurus"<<endl;
    //ticarethane birim tutar ve kullanım miktarı (kWh) çarpılarak kullanım bedeli hesaplandı...
}
//mesken classının yapıcı fonksiyonu oluşturuldu...
guc_hesabi::mesken::mesken() {
    cout << "Kullanim parametreleri aliniyor"<<endl;
}

void guc_hesabi::mesken::mesken_ucret_hesaplama(float kWh) {
    cout << "*********************************************************"<<endl;
    cout <<"Kullanim Bedeliniz:"<<kWh*mesken_birim_tutar<<" kurus"<<endl;
    //mesken ve kullanım miktarı (kWh) çarpılarak kullanım bedeli hesaplandı...
}

//tarimsal_sulama classının yapıcı fonksiyonu oluşturuldu...
guc_hesabi::tarimsal_sulama::tarimsal_sulama() {
    cout << "Kullanim parametreleri aliniyor"<<endl;
}

void guc_hesabi::tarimsal_sulama::tarimsal_ucret_hesaplama(float kWh) {
    cout << "*********************************************************"<<endl;
    cout <<"Kullanim Bedeliniz:"<<kWh*tarimsal_sulama_birim_tutar<<" kurus"<<endl;
    //tarimsal sulama birim tutar ve kullanım miktarı (kWh) çarpılarak kullanım bedeli hesaplandı...
}
//guc hesabı class ının yıkıcı fonksiyonu oluşturuldu
guc_hesabi::~guc_hesabi() {
    cout << "Program Sonlaniyor.";
}

float kullanim_sresi_hesaplama(){
    short int secenek;
    /*chrono classının alt clası olan time point classından baslangıc ve bitis nesneleri tanımlandı
     * baslandıç ve bitiş nesnelerini veri tipleri chrono alt uzayından system_clock struct yapısına göre ayarlandı*/
    chrono::time_point<chrono::system_clock> baslangic,bitis;
    for(int i = 0; i<2; i++) {
        cout << "Baslatmak icin 1 yazin:" << endl;
        cout << "Bitirmek icin 2 yazin:";
        cin >> secenek;
        cout <<endl<< "*********************************************************"<<endl;
        if (secenek == 1) {
            /*chrono::system_clock classından now fonksiyonun return degeri baslandıc degerine aktarılarak
             * sistemin basladıgı zamanı  baslangıc degerine atamış olduk..*/
            baslangic = chrono::system_clock::now();
        } else if (secenek == 2) {
            /*chrono classından system_clock classından now fonksiyonun return degeri bitis degerine aktarılarak
             * sistemin bitis zamanı bitis degerine atamış olduk..*/
            bitis = chrono::system_clock::now();
        }
    }
    /* chrono::system_clok classından to_time_t fonksiyonuna baslangic degeri gönderildi.
     * /*return degerini time_t veri tipinde baslangic_zamani degiskenine aktardı*/
    time_t baslangic_zamani = chrono::system_clock::to_time_t(baslangic);
    /* chrono::system_clok classından to_time_t fonksiyonuna bitis degeri gönderildi.
  * /*return degerini time_t veri tipinde bitis_zamanı degiskenine aktardı*/
    time_t bitis_zamani = chrono::system_clock::to_time_t(bitis);
    cout << "*********************************************************"<<endl;
    cout << "Sistemin baslangic zamani = "<< ctime(&baslangic_zamani)<<endl;
    cout << "*********************************************************"<<endl;
    cout << "Sistemin bitis zamani = " << ctime(&bitis_zamani) << endl;
    cout << "*********************************************************"<<endl;
    /*ctime fonksiyona bitis zamanı ve baslangıc zamanını gönderilerek anlaşılabilir yapıda zaman degerlerinin oluşturulması saglandı
     * Ör:Fri Nov 22 10:39:26 2019*/

    /*chrono::duration classından double veri tipine sahip kullanım süresi degişkeni tanımlandır..
     * Ve bitis degeri baslangic degerinden çıkarılarak kullanım süresi bulurur..
     * ve kullanim_sresi.count() kullanılarak saniye ye çevrilir ve fonksiyon return degeri olarak kullanılır...*/
    chrono::duration<double> kullanim_sresi;
    kullanim_sresi = bitis-baslangic;
    return kullanim_sresi.count();
}
/*void guc_hesabi classının guc_hesapla fonksiyonu tanımlanmıştır*/
void guc_hesabi::guc_hesaplama() {
    /*Elektriksel güç P=V*I formülü kullanılarak bulunur.(Volt*Amper = Watt)
     * elektik tüketiminin satışının hesaplanması için kw hesaplaması gerekir.
     * (Volt*Amper)/1000 kullanılarak W-->kW a dönüştürmüş olduk.*/
    float saatlik_guc = (sebeke_gerilimi*amper)/1000;
    /*Hesapladıgımız güç degeri 1 saatte tüketilen güç.Sistemin çalışmasını saniye üzerinden hesapladıgımız için
     * saatlik_güc/3600 yaparak 1 saniyede kullandıgımız güç degerini kW cinsinden buluruz*/
    saniyede_harcanan_guc = saatlik_guc/3600;
    /*Saniyede harcanan güç degerini kullanım süresi ile çarparak toplam kullandıgımız sürede harcanan güç degerini buluruz.*/
    toplam_harcanan_guc = saniyede_harcanan_guc*kullanim_sresi;
}
void guc_hesabi::kullanim_bilgileri() {
    //amper ve gerilim degelerini alınıp classın içindeki private kısma yazıldı..
    cout << "Sisteminizin kullandigi Amper Miktari::";
    cin >> amper;
    cout << endl<<"Sisteminizin kullandigi gerilim::";
    cin >> sebeke_gerilimi;
    cout << "*********************************************************"<<endl;
}


int main() {
    //nesleler tanımlandı
    guc_hesabi::mesken mesken_1;
    guc_hesabi::sanayi sanayi_1;
    guc_hesabi::ticarethane ticarethane_1;
    guc_hesabi::tarimsal_sulama tarim_1;
    guc_hesabi guc_bilgileri;
    while (true) {
        //windows cmd komutu olarak color 02 verilir ve yazı rengi degistirilir...
        system("COLOR 02");

        cout << "|-----------------------------------|" << endl;
        cout << "|Sanayi Elektirigi Kullaniyorsaniz 1|" << endl;
        cout << "|Ticarethane Kullaniyorsaniz 2      |" << endl;
        cout << "|Mesken Kullaniyorsaniz 3           |" << endl;
        cout << "|Tarim Sulama icin 4                |" << endl;
        cout << "|-----------------------------------|" << endl;
        cout << "Giriniz:";
        short int secenek;
        cin >> secenek;
        guc_bilgileri.kullanim_bilgileri();//kullanım bilgileri fonksiyonu kullanılarak amper ve gerilim degerleri alınır.

        guc_bilgileri.kullanim_sresi = kullanim_sresi_hesaplama();
        /*kullanim süresi fonksiyonu kullanılarak sistemin açık kalma süresi hesaplanılır ve classın içindeki kullanım süresi
         * degiskenine yazılır*/
        cout <<"Kullanim Suresi::"<< guc_bilgileri.kullanim_sresi <<" saniye"<< endl;
        guc_bilgileri.guc_hesaplama();

        if (secenek == 1) {
            sanayi_1.sanayi_ucret_hesaplama(guc_bilgileri.toplam_harcanan_guc);

        }

        if (secenek == 2) {
            ticarethane_1.ticarethane_ucret_hesaplama(guc_bilgileri.toplam_harcanan_guc);

        }

        if (secenek == 3) {
            mesken_1.mesken_ucret_hesaplama(guc_bilgileri.toplam_harcanan_guc);

        }
        if (secenek == 4) {

            tarim_1.tarimsal_ucret_hesaplama(guc_bilgileri.toplam_harcanan_guc);

        }
        system("PAUSE");//windows komutları tanımlanır...
        system("cls");

    }
    return 0;
}