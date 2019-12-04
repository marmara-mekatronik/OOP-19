#include <iostream>
#include <chrono>
#include <ctime>
#include <math.h>
using namespace std;

class Cnc{
public:
    int karsilastir(Cnc cnc);
    double sürehesaplama1();
    double sürehesaplama2();
};

double Cnc::sürehesaplama1() {
    int komut;
    chrono::time_point<chrono::system_clock> d_baslangic,d_bitis;
    cout<<"1. makinenin imalat suresi hesaplanicaktir."<<endl;
    cout<<"imalat sureci baslayinca 1'e basiniz."<<endl;
    cout<<"imalat sureci bitincede 0'e basiniz."<<endl;
    for(int j=0; j<2;j++){
        cin>>komut;
    if(komut==1){
        d_baslangic=chrono::system_clock::now();
        cout<<"imalat sureci basladi bitincede 0'e basiniz."<<endl;
    }
    if(komut==0){
        d_bitis=chrono::system_clock::now();
    }
    }
    chrono::duration<double> gecen_zaman = d_bitis-d_baslangic;
    cout << "1.makinenin hesaplanan suresi: " << gecen_zaman.count() << " saniye" << std::endl;
    return gecen_zaman.count();
}
double Cnc::sürehesaplama2() {
    int komut;
    chrono::time_point<chrono::system_clock> d_baslangic,d_bitis;
    cout<<"\n 2. makinenin imalat suresi hesaplanicaktir."<<endl;
    cout<<"imalat sureci baslayinca 1'e basiniz."<<endl;
    cout<<"imalat sureci bitincede 0'e basiniz."<<endl;
    for(int j=0; j<2;j++){
        cin>>komut;
        if(komut==1){
            d_baslangic=chrono::system_clock::now();
            cout<<"imalat sureci basladi bitincede 0'e basiniz."<<endl;
        }
        if(komut==0){
            d_bitis=chrono::system_clock::now();
        }
    }
    chrono::duration<double> gecen_zaman = d_bitis-d_baslangic;
    cout << "2.makinenin hesaplanan suresi: " << gecen_zaman.count() << " saniye" << std::endl;
    return gecen_zaman.count();
}
int Cnc::karsilastir(Cnc cnc) {
    return this->sürehesaplama1() > cnc.sürehesaplama2();
}
int main() {
    Cnc cnc1;
    Cnc cnc2;
    if(cnc1.karsilastir(cnc2)){
        cout<<"\n 2 makine hizi daha dusuktur 1 makineden."<<endl;
    }
    else{
        cout<<"\n 1 makine hizi daha dusuktur 2 makineden."<<endl;
    }
    return 0;
}