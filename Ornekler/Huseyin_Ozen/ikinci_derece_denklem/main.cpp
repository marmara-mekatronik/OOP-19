#include <iostream>
#include<cmath>
using namespace std;
class Denklem // sınıfımızı tanımlıyoruz
{
public:
    int a, b, c, x1, x2, d;
    Denklem () {a=0, b=0, c=0, x1=0, x2=0, d=0;} // yapıcı fonksiyon
    void hesapla(double a, double b, double c) // köklerin hesabı
    {
        d=b*b-4*a*c;
        if(d<0) cout<<"kok yok";
        else if(d==0)
        {
            x1=-b/2*a; cout<<"tek kok var:"<<x1;
        }
        else
        {
            x1=-b-sqrt(d)/2*a; x2=-b+sqrt(d)/2*a;
            cout<<"x1="<<x1<<" x2="<<x2;

        }	}
};
int main()
{
    Denklem d; // nesneyi oluşturup a,b,c okutuyoruz
    cout<<"a:"; cin>>d.a;
    cout<<"b:"; cin>>d.b;
    cout<<"c:"; cin>>d.c;
    d.hesapla(d.a,d.b,d.c); // d nesnesinin hesapla medotunu çalıştırdık
    return 0;
}