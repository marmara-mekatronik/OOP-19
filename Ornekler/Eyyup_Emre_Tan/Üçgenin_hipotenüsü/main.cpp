#include<iostream>
#include<math.h>


using namespace std;
class Triangle
{
private:
    int prvt1 = 3;

public:
    double hipotenus(int, int);
    double kalan(int);
};



int main()
{
    int k1,k2;
    int deger;
    double sonuc;
    cout << "BIRINCI DIK KENARI GIRINIZ:  ";
    cin >> k1;
    cout << endl;
    cout << "IKINCI DIK KENARI GIRINIZ:  ";
    cin >> k2;
    cout << endl;
    Triangle nesneucgen;
    sonuc = nesneucgen.hipotenus(k1, k2);

    cout << endl;
    cout << "UCGENIN HIPOTENUSU = " << sonuc << endl;

    cout << "BIR SAYI GIRINIZ:  ";
    cin >> deger;
    cout << endl;
    double sayi2;
    sayi2 = nesneucgen.kalan(deger);
    cout << "GIRDIGINIZ SAYININ 3 E BOLUMUNDEN KALAN = " << sayi2;

    cin.get();
    cin.get();
    return 0;
}
double Triangle::hipotenus(int dkenar1, int dkenar2)
{
    double pkenar1 = pow(dkenar1,2);
    double pkenar2 = pow(dkenar2,2);
    double tkenar = pkenar1 + pkenar2;
    double hptns = sqrt(tkenar);
    return hptns;
}
double Triangle::kalan(int sayi)
{
    double toplam;
    toplam = sayi%Triangle::prvt1;
    return toplam;
}