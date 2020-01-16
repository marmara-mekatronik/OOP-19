#include <iostream>

using namespace std;

class Elips{
private:
    double a,b; // a: elipsin kısa eksen yarıçapı, b: elipsin uzun eksen yarıçapı//
public:
    void setA(int a);
    void setB(int b);
    double getALAN();
    double getCEVRE();
    Elips();
    ~Elips();
};

void Elips::setA(int a) {
    this->a=a;
}

void Elips::setB(int b) {
    this->b=b;
}

double Elips::getALAN(){
    return (3.14*(a+b))/2;
}

double Elips::getCEVRE(){
    return (3.14*a*b)/2;
}
Elips::Elips(){
    cout<<"*****************************************************"<<endl;
    cout<<"ELIPS ALAN VE CEVRE HESAPLAMA PROGRAMINA HOSGELDINIZ"<<endl;
    cout<<"*****************************************************"<<endl;
}
Elips::~Elips(){
    cout<<"*****************************************************"<<endl;
    cout<<"ELIPS ALAN VE CEVRE HESAPLAMA PROGRAMINDAN CIKIS YAPILIYOR"<<endl;
    cout<<"*****************************************************"<<endl;
}
int main(){
    int a1,b1;
    Elips elips1;
    cout<< endl <<"Lutfen elipsin kisa eksen yaricapini giriniz"<<endl;
    cout<<"ELIPS KISA EKSEN YARICAPI  =  ";
    cin >> a1;

    cout<< endl << "Lutfen elipsin uzun eksen yaricapini giriniz"<<endl;
    cout<< "ELIPS UZUN EKSEN YARICAPI  =  ";
    cin >> b1;

    elips1.setA(a1);
    elips1.setB(b1);

    cout<< endl << "Degerlerinizi girdiginiz elipsin alani hesaplandi."<<endl;
    cout<< "ELIPSIN ALANI  =  "<< elips1.getALAN()<<endl<<endl;

    cout<< "Degerlerini girdiginiz elipsin cevresi hesaplandi."<<endl;
    cout<< "ELIPSIN CEVRESI  =  "<<elips1.getCEVRE()<<endl<<endl;

    return 0;

}



