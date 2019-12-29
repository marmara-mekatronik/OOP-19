#include <iostream>
using namespace std;

class Silindir{
public:
    void setHacim(double r, double h);
    double getHacim();

    Silindir operator+(const Silindir& s){
        Silindir silindirr;
        silindirr.yaricap=this->yaricap+s.yaricap;
        silindirr.yukseklik=this->yukseklik+s.yukseklik;
        return silindirr;
    }

private:
    double yaricap;
    double yukseklik;
};

void Silindir::setHacim(double r, double h) {
    yaricap=r;
    yukseklik=h;
}

double Silindir::getHacim() {
    return 3.14*yaricap*yaricap*yukseklik;
}

int main(){
    Silindir silindir1;
    Silindir silindir2;
    Silindir silindir3;
    double hacim;

    silindir1.setHacim(2.2,4.5);
    silindir2.setHacim(3.6,7.1);

    cout<<"1.Silindirin hacmi: "<<silindir1.getHacim()<<endl;
    cout<<"2.Silindirin hacmi: "<<silindir2.getHacim()<<endl;

    silindir3=silindir1+silindir2;
    hacim=silindir3.getHacim();
    cout<<"3.Silindirin hacmi: "<<hacim<<endl;
}