#include <iostream>
using namespace std;

class Kup{
public:
    void setKenar(double k);
    double alan();
    Kup operator--();
private:
    double kenar;
};
void Kup::setKenar(double k){
    kenar=k;
}
double Kup::alan(){
    return kenar*kenar*kenar;
}
Kup Kup::operator--(){
    Kup kup;
    kup.kenar=(this->kenar)-1;
    return kup;
}
int main() {
    double k;
    Kup Kup1;
    cout<<"Kenar bilgisini giriniz: ";
    cin>>k;
    Kup1.setKenar(k);
    cout<<"Alan: "<<Kup1.alan()<<endl;
    Kup1=--Kup1;
    cout<<"Kenar uzunluğu bir birim azaltılan küpün alanı: " <<Kup1.alan() <<endl;

    return 0;
}