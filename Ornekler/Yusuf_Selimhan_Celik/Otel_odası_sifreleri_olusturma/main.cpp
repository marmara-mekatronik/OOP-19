#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void kayit_olustur(string a, string b);
void kayit_sil();
//Global degiskenlerimizi tanımladık. Ileride private kısmındaki degiskinlere atama yapabilmek icin kullanacagız.
string y;
string x;
//Otel odası adında bir sınıf tanımladık.
class otelOdasi {

public:
//Public kısmına herkesin kullanabilecegi fonksiyon prototipleri olusturuyoruz.
    void sifreDegistirK();
    void sifreGoster ();
    void sifreDegistirO();

private:
    //Sadece erisimi olanların ulasabilecegi bilgiler burada yer alıyor.
    string kasaSifresi  ;
    string odaSifresi  ;
};
//Kasa sifremizi belirlemek icin olusturulan fonksiyonumuz.
void otelOdasi::sifreDegistirO() {
    cout<<"Yeni oda sifrenizi giriniz.."<<endl;
    cin>>y;
    odaSifresi = y;
}
//Oda sifremizi olusturmak icin olan fonksiyonumuz.
void otelOdasi::sifreDegistirK() {
    cout << "Yeni kasa sifrenizi giriniz.." << endl;
    cin >> x;
    kasaSifresi = x;
}
//Atanan sifreleri gosterecek olan fonksiyonumuz.
void otelOdasi::sifreGoster() {
    cout<<"Kasa Sifreniz : "<< kasaSifresi<<endl;
    cout<<"Oda Sifreniz : "<< odaSifresi<<endl;
}

int main(){
    otelOdasi Oda1;
    int secenek;
    cout << "Oda kayit icin 1'e basiniz.." << endl << "Kayit sildirmek icin 2'ye basiniz.." <<endl ;
    cin >> secenek;
    if (secenek == 1) {
        Oda1.sifreDegistirO();
        Oda1.sifreDegistirK();
        ofstream outfile;
        outfile.open("kayit.txt");
        outfile << "Kayıt Bilgileri :" << endl << "Oda sifresi : " << x << endl << "Kasa sifresi : " << y ;
        Oda1.sifreGoster();
        cout << "Kaydiniz olusturuldu."<<endl;
    }
    else if (secenek == 2)
    {
        ofstream outfile;
        outfile.open("kayit.txt");
        cout << "Kaydiniz silindi." <<endl;
    }




    return 0;

}
