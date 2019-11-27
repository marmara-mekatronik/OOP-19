#include <iostream>
using namespace std;
#include <ctime>
#include <chrono>


class Silindir {

public:
    double yaricap;
    double yukseklik;
    void setAlan(double r , double h);
    double getAlan(void);

private:
    double Alan;
};

void Silindir::setAlan(double r, double h) {

    double SilindirAlan;
    SilindirAlan=2*3.14*r*(r+h);
    Alan=SilindirAlan;
}

    double Silindir::getAlan(void){
    return Alan;

    }


int main() {


    std::chrono::time_point<std::chrono::system_clock> d_basla, d_son;
    d_basla = std::chrono::system_clock::now();

    Silindir Silindir1;

    cout <<"Yari capini giriniz"<<endl;
    cin>>Silindir1.yaricap;
    cout <<"Yuksekligini giriniz "<<endl;
    cin>>Silindir1.yukseklik;

    Silindir1.setAlan(Silindir1.yaricap , Silindir1.yukseklik);

    cout<<"Silindirin Alani:"<<Silindir1.getAlan()<<endl;

    d_son = std::chrono::system_clock::now();

    std::chrono::duration<double> gecen_zaman = d_son - d_basla;
    std::time_t baslangic_zamani = std::chrono::system_clock::to_time_t(d_basla);
    std::time_t bitis_zamani = std::chrono::system_clock::to_time_t(d_son);
    std::cout << "Gecen Sure : " << gecen_zaman.count() << " saniye" << std::endl;
    return 0;
}