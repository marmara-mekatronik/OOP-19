#include <iostream>
#define pi 3.14
using namespace std;

class Sekil{
public:
    Sekil(int r,int h);
    virtual double hacim();

protected:
    int yaricap,yukseklik;
};
Sekil::Sekil(int r, int h) {
    yaricap=r;
    yukseklik=h;
}
double Sekil::hacim() {
    cout<<"Ebeveyn class hacmi"<<endl;
}
class Silindir:public Sekil{
public:
    Silindir(int r,int h):Sekil(r,h){}
    double hacim();
};
double Silindir::hacim() {
    return pi*yaricap*yaricap*yukseklik;
}
int main(){
    Sekil *sekil;
    Silindir silindir(7,5);
    sekil=&silindir;

    cout<<sekil->hacim()<<endl;
}