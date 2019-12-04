//Amaç : Bir basketbol takiminin ilk 5'inin bilgilerini ve
// adreslendikleri adresi Transfermarket adlı sitede gosterdigini
// bir dusundugumuz bir program yapmak

#include <iostream>
#include <string>

const int ilkbes=5;
const int numara=5;
using namespace std;

int main () {

    string b[ilkbes]={"Semih","Melih","Yavuz","Kaan","Turudu"};
    string *basket;
    basket=b;//

    int a[numara]={16,22,18,3,9};
    int j;
    int secenek;

    cout<<"Fenerbahce Ulker basketbol takiminin ilk besinin bilgilerini ogrenmek icin 1'e,\ntransfermarket adreslemelerini gormek icinse 2'ye basiniz.";
    cin>>secenek;

    if(secenek==1) {

        for (int i = 0; i < ilkbes; i++) {
            cout << "Ilk besten " << i + 1 << ". oyuncu";
            cout << " " << a[i] << " sirt numarasiyla karsinizda";
            cout << " " << b[i] << "\n";
            j++;
        }

    }

    else if (secenek==2){
        for (int i = 0; i < ilkbes; i++) {
            cout << "" << i + 1 << ". oyuncu olan";
            cout << " " << a[i] << " sirt numarali";
            cout << " " << b[i] <<" adli oyuncunun transfermarket adresi: "<<basket<<"\n";
            j++;
            basket++;
        }
    }

    else {
        cout<<"Yanlis deger girdiniz.";
    }

    return 0;
}