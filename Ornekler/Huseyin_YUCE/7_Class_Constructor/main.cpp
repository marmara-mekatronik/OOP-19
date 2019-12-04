<<<<<<< HEAD
#include <iostream>

class Cizgi {
public:
    void setUzunluk(double Uz);
    double getUzunluk(void);
    Cizgi();
    ~Cizgi();
private:
    double uzunluk;
};

void Cizgi::setUzunluk(double Uz) {
    uzunluk=Uz;
}
double Cizgi::getUzunluk() {
    return uzunluk;
}
Cizgi::Cizgi() {
    std::cout << "Şu anda nesne oluşturuluyor" << std::endl;
}
Cizgi::~Cizgi() {
    std::cout << "Şu an nesne siliniyor" << std::endl;
}


int main() {
    Cizgi Cizgi1;
    Cizgi1.setUzunluk(99.9);
    std::cout << Cizgi1.getUzunluk()<< std::endl;
    Cizgi Cizgi2;

    return 0;
=======
#include <iostream>

class Cizgi {
public:
    void setUzunluk(double Uz);
    double getUzunluk(void);
    Cizgi();
    ~Cizgi();
private:
    double uzunluk;
};

void Cizgi::setUzunluk(double Uz) {
    uzunluk=Uz;
}
double Cizgi::getUzunluk() {
    return uzunluk;
}
Cizgi::Cizgi() {
    std::cout << "Şu anda nesne oluşturuluyor" << std::endl;
}
Cizgi::~Cizgi() {
    std::cout << "Şu an nesne siliniyor" << std::endl;
}


int main() {
    Cizgi Cizgi1;
    Cizgi1.setUzunluk(99.9);
    std::cout << Cizgi1.getUzunluk()<< std::endl;
    Cizgi Cizgi2;

    return 0;
>>>>>>> upstream/master
}