//Oluşturulan nesnenin değişkenlerinin atanması için yapıcı fonksiyonda atanan değerlerin kullanılmasındaki hız ile
//nesne oluşturulurken atanan değerlerin kullanılmasındaki hızları hesaplayıp karşılaştıran program.

#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;
using namespace chrono;

class dikdortgen {
private:
    int kenarA;
    int kenarB;
public:
    dikdortgen (int a=5, int b=9 );
    int alan();
};

dikdortgen::dikdortgen(int a, int b){
    kenarA = a;
    kenarB = b;
}

int dikdortgen::alan() {
    return kenarA*kenarB;
}


int main() {

    time_point < system_clock> d_basla, d_son, d_basla2, d_son2;
    d_basla = system_clock::now();
    dikdortgen dik1;
    d_son =system_clock::now();
    cout<<"1. dikdörtgen alanı:"<<dik1.alan()<<endl;


    duration<double> gecen_zaman = d_son - d_basla;
    time_t baslangic_zamani = system_clock::to_time_t(d_basla);

    d_basla2 = system_clock::now();
    dikdortgen dik2(4,8);
    d_son2 =system_clock::now();
    cout<<"2. dikdörtgen alanı:"<<dik2.alan()<<endl;

    duration<double> gecen_zaman2 = d_son2 - d_basla2;
    time_t bitis_zamani = system_clock::to_time_t(d_son2);

    cout << "Performans hesaplama baslangic anı : " << ctime(&baslangic_zamani) << endl;
    cout << "Performans hesapalama bitis anı : " << ctime(&bitis_zamani) << endl;
    cout << "Nesne 1 için geçen Süre : " << gecen_zaman.count() << " saniye" << endl;
    cout << "Nesne 2 için geçen Süre : " << gecen_zaman2.count() << " saniye" << endl;

    if(gecen_zaman>gecen_zaman2){
        cout<<"Nesne değişkenleri için yapıcı fonksiyondaki default olarak atanmış değerleri kullanmak daha hızlı bir işlemdir."<<endl;
    }
    else if(gecen_zaman2>gecen_zaman){
        cout<<"Nesne değişkenleri için nesneyi oluştururken atanan değerleri kullanmak daha hızlı bir işlemdir."<<endl;
    }
    else{
        cout<<"Nesne değişkenleri için yapıcı fonksiyonda default olarak atanmış değerleri kullanmak"
              "veya nesne oluşturulurken atanan değerleri kullanmak arasında fark yoktur.."<<endl;
    }
    return 0;
}