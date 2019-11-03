#include <iostream>

class Kutu {
public:
    double uzunluk;
    void setGenislik(double gDeger);
    double getGenislik(void);

private:
    double genislik;
};

void Kutu::setGenislik(double gDeger) {
    std::cout << gDeger << std::endl;
    genislik=gDeger;
}

double Kutu::getGenislik(void) {
    return genislik;
}

int main() {
    Kutu Kutu1;
    Kutu1.setGenislik(11.5);
    std::cout << "Kutunun Genisliği: " << Kutu1.getGenislik();

}