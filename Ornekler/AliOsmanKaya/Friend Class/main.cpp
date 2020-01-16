#include <iostream>
using namespace std;

class Dikdortgen1{
public:
    Dikdortgen1(int t,int y);
    friend class Dikdortgen2;

private:
    int taban,yukseklik;
};
Dikdortgen1::Dikdortgen1(int t, int y) {
    taban=t;
    yukseklik=y;
}
class Dikdortgen2{
public:
    void setAlan(int g,int y);
    int getAlan();
    void cevir(Dikdortgen1 &dik);

private:
    int genislik;
    int yukseklik;
};
void Dikdortgen2::setAlan(int g, int y) {
    genislik=g;
    yukseklik=y;
}
int Dikdortgen2::getAlan() {
    return genislik*yukseklik;
}
void Dikdortgen2::cevir(class Dikdortgen1 & dik) {
    genislik=dik.taban;
    yukseklik=dik.yukseklik;
}
int main(){
    Dikdortgen2 dik1;
    dik1.setAlan(5,4);
    cout<<dik1.getAlan()<<endl;

    Dikdortgen1 dik2(6,8);
    dik1.cevir(dik2);
    cout<<dik1.getAlan();
}