#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

class Ortalama{
    double sayi1,sayi2,sayi3,sayi4;
public:
    void serOrt(double a,double b,double c,double d);
    double getOrt();
};

void Ortalama::serOrt(double a, double b, double c, double d){
    sayi1=a;
    sayi2=b;
    sayi3=c;
    sayi4=d;
}

double Ortalama::getOrt() {
    return sayi1+sayi2+sayi3+sayi4/4;
}

int main(){

    std::chrono::time_point<std::chrono::system_clock> d_basla, d_son;
    d_basla = std::chrono::system_clock::now();

    double standart_sapma=1.51;
    Ortalama ort;
    ort.serOrt(1.1,2.2,3.3,4.4);
    cout<<"Degisim katsayisi: ";
    cout<<"%"<<standart_sapma/ort.getOrt()*100<<endl;

    d_son = std::chrono::system_clock::now();

    std::chrono::duration<double> gecen_zaman = d_son - d_basla;
    std::time_t baslangic_zamani = std::chrono::system_clock::to_time_t(d_basla);
    std::time_t bitis_zamani = std::chrono::system_clock::to_time_t(d_son);

    std::cout << "Gecen sure : " << gecen_zaman.count() << " saniye" << std::endl;
}