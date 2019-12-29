#include <iostream>
#define pi 3.14
using namespace std;

class Silindir{
public:
    void setAlan(double r, double h);
    double getAlan();

    Silindir();
    ~Silindir();

private:

    double yaricap;
    double yukseklik;
};

void Silindir::setAlan(double r, double h) {
    yaricap=r;
    yukseklik=h;
}

double Silindir::getAlan() {
    return 2*pi*yaricap*yaricap+2*pi*yaricap*yukseklik;
}

Silindir::Silindir() {
    cout<<"nesne olusturuluyor.."<<endl;
}

Silindir::~Silindir() {
    cout<<"nesne siliniyor..";
}

int main(){
    Silindir silindir;
    silindir.setAlan(3.2,5.4);
    cout<<silindir.getAlan()<<endl;
}