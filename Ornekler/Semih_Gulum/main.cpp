#include <iostream>

using namespace std;

class site_bilgileri {
public:
    int apartman_sayisi=15;
    int daire_sayisi=60;
    int guvenlik_sayisi=5;
    int insan_sayisi=200;
    int aidat_miktari=150;
};

int main() {
    site_bilgileri sb1;
    int istek1;
    int istek2;

    cout<<"Siteye hosgeldiniz.Sitemiz ile ilgileniyor ve hakkinda bilgi almak\nistiyorsaniz 1'e ilgilenmiyor iseniz 2'ye basiniz.";
    cin>>istek1;

    if(istek1==1) {
        cout << "Apartman sayisini ogrenmek icin 1'e basiniz.";
        cout << "Daire sayisini ogrenmek icin 2'ye basiniz.";
        cout << "Guvenlik sayisini ogrenmek icin 3'e basiniz.";
        cout << "Insan sasini ogrenmek icin 4'e basiniz.";
        cout << "Aidat bilgisini ogrenmek icin 5'e basiniz.";

        cin >> istek2;

        switch (istek2) {
            case 1:
                cout << "Sitenizdeki apartman sayisi: " << sb1.apartman_sayisi << endl;
                break;
            case 2:
                cout << "Sitenizdeki daire sayisi: " << sb1.daire_sayisi;
                break;
            case 3:
                cout << "Sitenizdeki guvenlik sayisi: " << sb1.guvenlik_sayisi;
                break;
            case 4:
                cout << "Sitenizdeki insan sayisi: " << sb1.insan_sayisi;
                break;
            case 5:
                cout << "Sitenizdeki aidat tutari: " << sb1.aidat_miktari;
                break;
            default:
                cout << "Yanlis deger girdiniz lutfen uygun deger girdiniz.";
        }
    }
    else if (istek1==2){
      cout<<"Iyi gunler dileriz.";
    }
    return 0;
}