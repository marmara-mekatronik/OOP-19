#include <iostream>

class Kutu {
public:
    double derinlik;
    double genislik;
    double yukseklik;
};

using namespace std;


int main() {
    Kutu Kutu1;
    Kutu1.derinlik = 0.5;
    Kutu1.genislik = 1;
    Kutu1.yukseklik = 1.5;

    Kutu Kutu2;
    Kutu2.derinlik = 2.5;
    Kutu2.genislik = 2;
    Kutu2.yukseklik = 2.5;

    cout << "1. Kutunuzun D:" << Kutu1.derinlik << " G:" << Kutu1.genislik << " Y:" << Kutu1.yukseklik;

    return 0;
}
