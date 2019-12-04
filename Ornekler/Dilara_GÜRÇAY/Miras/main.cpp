#include <iostream>
using namespace std;

class Yuzey{
public:
    void setKenar(double k);
    double alan();
protected:
    double kenar;
};
void Yuzey::setKenar(double k){
    kenar=k;
}
double Yuzey::alan(){
    return kenar*kenar;
}

class Kup: public Yuzey{
public:
    double kupHacim();
};
double Kup::kupHacim(){
    return this->alan()*kenar;
}

class KarePrizma: public Yuzey{
public:
    double  kPrizmaHacim(double yuk);
};
double  KarePrizma::kPrizmaHacim(double yuk){
    return this->alan()*yuk;
}

int main() {
    double Kenar,Yukseklik;
    Kup Kup1;
    cout<<"Kenar uzunluğunu giriniz: "<<endl;
    cin>>Kenar;
    Kup1.setKenar(Kenar);
    cout<<"Küpün hacmi: "<<Kup1.kupHacim()<<endl;

    KarePrizma KareP1;
    KareP1.setKenar(Kenar);
    cout<<"Yüksekliğini giriniz: "<<endl;
    cin>>Yukseklik;
    cout<<"Kare Prizmanın hacmi: "<<KareP1.kPrizmaHacim(Yukseklik)<<endl;

    return 0;
}