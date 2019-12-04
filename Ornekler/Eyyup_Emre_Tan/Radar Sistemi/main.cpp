#include <iostream>
#include <math.h>
#include <chrono>
using namespace std;

class Araba{
public:
    void gecen_zaman(double z);
    double hizhesaplama();
private:
    double zaman;
};
double Araba::hizhesaplama() {
    return (500/zaman);
}
void Araba::gecen_zaman(double z) {
    zaman=z;
}

int main() {
    Araba araba1;
   int secenek;
   double hiz;
   chrono::time_point<chrono::system_clock>d_baslangic,d_bitis;
   cout<<"---------------------------------------------"<<endl;
   cout<<"Radar arabayi gordugunde zamani baslatmak icin 0'e basiniz."<<endl;
   cout<<"500 metre gectikten sonra 1'e basiniz."<<endl;
   cout<<"---------------------------------------------"<<endl;
   for(int j=0; j<3;j++) {
       cin >> secenek;
       if (secenek == 0) {
           d_baslangic=chrono::system_clock::now();
           cout << "zaman saymaya basladi" << endl;
       }
       cout << "500 metre gectikten sonra 1'e basiniz." << endl;
       if (secenek == 1) {
           d_bitis = chrono::system_clock::now();
           cout << "500 metre gecilmistir." << endl;
           break;
       }
   }
   chrono::duration<double> gecen_zaman = d_bitis-d_baslangic;
   cout << "Gecen Sure : " << gecen_zaman.count() << "saniye" <<endl;
    araba1.gecen_zaman(gecen_zaman.count());
    hiz=araba1.hizhesaplama();
    cout<< "Radarin yakaladigi hiz."<<hiz<<endl;
    if(hiz>90){
        cout<<"araba cok hizli hiz cezasi verilmelidir."<<endl;
    }
    else if(hiz<90){
        cout<<"araba uygun hizdadir."<<endl;
    }

    return 0;
}