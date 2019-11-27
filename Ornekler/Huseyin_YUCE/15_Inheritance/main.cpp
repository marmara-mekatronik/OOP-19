#include <iostream>

using namespace std;

class Sekil {
public:
    void setGenislik(int g);
    void setYukseklik(int y);

protected:
    int genislik, yukseklik;
};
void Sekil::setGenislik(int g) {
    genislik=g;
}
void Sekil::setYukseklik(int y) {
    yukseklik=y;
}

class Dikdortgen: public Sekil {
public:
    int getAlan(){
        return (genislik * yukseklik);
    }
};


int main() {
    Dikdortgen Dik1;
    Dik1.setGenislik(5);
    Dik1.setYukseklik(15);
    cout << "Dikdörtgenin Alanı :" <<Dik1.getAlan() << endl;
    return 0;
}