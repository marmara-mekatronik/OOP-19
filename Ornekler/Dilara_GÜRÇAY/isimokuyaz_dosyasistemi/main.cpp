#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ad[100];
    char secenek;
    int sayac=0;

    ofstream isim;
    isim.open("yazma.txt");
    isim<<"##ISIMLER##\n";
    isim.close();

    isim.open("yazma.txt",ios::app);
    do {

        if (isim.is_open()) {
            cout << "isim giriniz: ";
            cin>>ad;
            isim << ad<<endl;
            sayac++;
            cout<<"devam icin 'e'. bitirmek icin 'h': ";
            cin>>secenek;
        } else cout << "Dosya acilamadi...";
    }while(secenek!='h');
    isim.close();


    ifstream isimoku;
    isimoku.open("yazma.txt");
    for(sayac;sayac>=0;sayac--){
        isimoku>>ad;
        cout<<"isim: "<<ad<<endl;

    }

    isim.close();


    return 0;
}