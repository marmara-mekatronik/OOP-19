#include <iostream>

using namespace std;

class Cokgen{

public:
void setKenarUzunluk(int ku);
void setYukseklik(int y);

protected:
int KenarUzunluk;
int Yukseklik;

};

void::Cokgen::setKenarUzunluk(int ku) {

    KenarUzunluk = ku;

}

void::Cokgen::setYukseklik(int y) {

    Yukseklik = y;
}

class Ucgen: public Cokgen{

public:

    int getAlan(){

        return KenarUzunluk*Yukseklik/2;

    }
};



int main() {
    Ucgen Ucgen1;
    Ucgen1.setYukseklik(18);
    Ucgen1.setKenarUzunluk(24);

    cout<< "Ucgenin Alani : "<<Ucgen1.getAlan()<< endl;



    return 0;
}