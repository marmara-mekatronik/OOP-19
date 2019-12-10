#include <iostream>

class calisanlar {
public:
    int no;
    std::string isim;
    float maas;
    calisanlar(int no, std::string isim, float maas)
    {
        this->no = no;
        this->isim = isim;
        this->maas = maas;
    }
    void yazdir()
    {
        std::cout<<no<<"  "<<isim<<"  "<<maas<<std::endl;
    }
};
int main(void) {
    calisanlar c1 =calisanlar(101, "deniz", 890000);
    calisanlar c2=calisanlar(102, "ekin", 59000);
    c1.yazdir();
    c2.yazdir();
    return 0;
}
