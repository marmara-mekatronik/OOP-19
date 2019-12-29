#include <iostream>
using namespace std;
#include <string>

template <class degisken>
class Kimlik_bilgileri{
public:
    degisken bilgi;
    Kimlik_bilgileri (degisken bilgi): bilgi(bilgi){}
};



int main() {

    Kimlik_bilgileri<int>  a(12345670);
    cout<<"Tc numara: "<<a.bilgi << endl;

    Kimlik_bilgileri<string> b("Semih");
    cout<<"Adı: "<<b.bilgi << endl;

    Kimlik_bilgileri<string> c("Sivas");
    cout<<"Dogum yeri: "<<c.bilgi<<endl;

    Kimlik_bilgileri<int>  d(1998);
    cout<<"Dogum yili : "<<d.bilgi << endl;

    return 0;
}