
#include <iostream>
#include <math.h>

class vektor{
public:
    void KordinatBas(double x1,double y1);
    void KordinatBit(double x2,double y2);
    vektor operator+(const vektor& vek);
    double vekUz();
    private:
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
double vektor::vekUz(){
    return sqrt((bitx-basx)*(bitx-basx)+(bity-basy)*(bity-basy));
}
vektor vektor::operator+(const vektor& gelen_vek){
    vektor vek;
    vek.basx=this->basx;
    vek.basy=this->basy;
    vek.bitx=this->bitx+(gelen_vek.bitx-gelen_vek.basx);
    vek.bity=this->bity+(gelen_vek.bity-gelen_vek.basy);
    return vek;
}

int main(){
    vektor vek1;
    vektor vek2;
    vektor vek3;
    vek1.KordinatBas(2,2);
    vek1.KordinatBit(5,6);
    std::cout<<"1. vektorun uzunlugu = "<<vek1.vekUz()<<"\n";
    vek2.KordinatBas(7,2);
    vek2.KordinatBit(10,6);
    std::cout<<"2. vektorun uzunlugu = "<<vek2.vekUz()<<"\n";
    vek3=vek1 + vek2;
    std::cout<<"3. vektorun uzunlugu = "<<vek3.vekUz()<<"\n";
    return 0;
}