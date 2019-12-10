#include <iostream>

double pi=3.14;
using namespace std;

/*  /////////////////////////////////////////////////////////////// */
class silindir{
public:

    silindir operator+ (const silindir& s){
        silindir silindir1;
        silindir1.yaricap=this->yaricap;
        silindir1.yukseklik= this ->yukseklik + s.yukseklik;
        return silindir1;
    }
    void set_silindir(int r ,int h);
    double hacim_hesapla();

private:
 double yaricap,yukseklik,hacim;
};
void silindir::set_silindir(int r ,int h){
    yaricap=r;
    yukseklik=h;
}
double silindir::hacim_hesapla() {
    return hacim=pi*yaricap*yaricap*yukseklik;
}


int main() {

    silindir silindir1;
    silindir silindir2;
    silindir silindir3;
    silindir silindir4;
    int x,y,z;
    cout<<"ust uste koymak istedigiiniz silindirlerden bir tanesinin yaricapini giriniz "<<endl;
    cin>>x;
    cout<<"ust uste koymak istedigiiniz silindirlerin yusekliklerini sırasıyla giriniz "<<endl;
    cin>>y;
    cin>>z;


    silindir1.set_silindir(x,y);
    silindir2.set_silindir(x,z);

    cout<<"1.slindir hacim: "<<silindir1.hacim_hesapla()<<endl;
    cout<<"2.slindir hacim: "<<silindir2.hacim_hesapla()<<endl;

    silindir3 = silindir1 + silindir2;
    cout<<"iki silindir ust uste konduktan sonra olusan silindirin hacimi: "<<silindir3.hacim_hesapla()<<endl;

    return 0;
}