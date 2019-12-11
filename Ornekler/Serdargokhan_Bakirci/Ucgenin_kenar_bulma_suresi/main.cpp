#include <math.h>
#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

int main() {
    std::chrono::time_point<std::chrono::system_clock>start,end;
    start= std::chrono::system_clock::now();

    double a,b,c;
    cout << "Ucgenin a kenarinin uzunlugunu girin: ";
    cin >> a;
    cout << "Ucgenin hipotenus uzunlugunu girin: ";
    cin >> c;
    cout << "\n\n";
    start= std::chrono::system_clock::now();
    b = sqrt((c*c)-(a*a));
    end = std::chrono::system_clock::now();
    cout << "Ucgenin b kenarinin uzunlugu: " << b;
    cout << "\n";
    cout << "Ucgenin Alani: " << (a*b)/2;

    end = std::chrono::system_clock::now();
    std::chrono::duration<double > gecen_zaman;
    gecen_zaman=end-start;
    time_t baslangic_zamani=std::chrono::system_clock::to_time_t(start);
    time_t bitis_zamani=std::chrono::system_clock::to_time_t(end);


    cout<<"baslangic ani: "<< ctime(&baslangic_zamani)<<endl;
    cout<<"bitis ani: "<< ctime(&bitis_zamani)<<endl;
    cout<<  "toplam gecen zaman : " << gecen_zaman.count()<<endl;
    return 0;
}
