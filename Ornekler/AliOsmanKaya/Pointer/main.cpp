#include <iostream>
using namespace std;

class Ucgen{
public:
    void setAlan(double t,double y);
    double getAlan();

private:
    double taban;
    double yukseklik;
};
void Ucgen::setAlan(double t, double y) {
    taban=t;
    yukseklik=y;
}
double Ucgen::getAlan() {
    return (taban*yukseklik)/2;
}
int main(){
    Ucgen ucgen1;
    Ucgen ucgen2;
    Ucgen *ptrUcgen;

    ucgen1.setAlan(5.1,4.2);
    ptrUcgen=&ucgen1;
    cout<<ptrUcgen->getAlan()<<endl;

    ucgen2.setAlan(7.8,9.4);
    ptrUcgen=&ucgen2;
    cout<<ptrUcgen->getAlan();
}