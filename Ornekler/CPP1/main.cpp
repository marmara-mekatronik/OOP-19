#include <iostream>

class Kutu {
public:
    double derinlik;
    double genislik;
    double yukseklik;
	void ozellikleri_yazdir() {
        cout <<"Derinlik = "<<derinlik<<" Genislik = "<<genislik<<" Yukseklik = "<<yukseklik<<endl;
    }
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

	Kutu1.ozellikleri_yazdir;
	Kutu2.ozellikleri_yazdir;

    return 0;
}
