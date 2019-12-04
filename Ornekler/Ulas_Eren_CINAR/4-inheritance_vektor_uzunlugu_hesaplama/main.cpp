
#include <iostream>
#include <math.h>

class vektor{
public:
    void KordinatBas(double x1,double y1);
    void KordinatBit(double x2,double y2);

protected:
    double basx,basy,bitx,bity;
};
void vektor::KordinatBas(double x1, double y1) {
    basx=x1;
    basy=y1;
}
void vektor::KordinatBit(double x2, double y2) {
    bitx=x2;
    bity=y2;
}

class hesapUzunluk: public vektor{
public:
    double vekUz(){
        return sqrt((bitx-basx)*(bitx-basx)+(bity-basy)*(bity-basy));
    }
};

int main(){
    hesapUzunluk vek1;
    vek1.KordinatBas(2,2);
    vek1.KordinatBit(5,6);
    std::cout<<"vektor uzunlugu = "<<vek1.vekUz()<<"\n";
    return 0;
}