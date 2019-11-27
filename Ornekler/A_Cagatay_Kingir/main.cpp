#include <iostream>
#include <fstream>
using namespace std;

class silindir
{
private:
    double r,h;
    const double pi=3.1415;
public:
    void oku_yari(double yaricap)
    {
        r=yaricap;
    }
    void oku_yuk(double yukseklik)
    {
        h=yukseklik;
    }
    double hacim() {
        return pi*r*r*h;
    }
};
int main()
{
    silindir p;
    double yaricap, yukseklik;
    cout<<"Yaricapi giriniz: ";
    cin>>yaricap;
    p.oku_yari(yaricap);
    cout<<"Yuksekligi giriniz: ";
    cin>>yukseklik;
    p.oku_yuk(yukseklik);
    cout<<"silindirin hacmi="<<p.hacim();
    return 0;
}