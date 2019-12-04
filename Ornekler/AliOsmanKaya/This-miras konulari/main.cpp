#include <iostream>

using namespace std;

class Buyukluk{

public:
    void setKuvvet(int f);
    void setKutle(int m);

protected:
    int kuvvet;
    int kutle;
};

void Buyukluk::setKuvvet(int f) {
    kuvvet=f;
}

void Buyukluk::setKutle(int m) {
    kutle=m;
}

class Kure: public Buyukluk{

public:
    int getIvme(){
        return kuvvet/kutle;
    }

    int karsilastir(Kure kure){
        return this->getIvme()>kure.getIvme();
    };
};

int main(){
    Kure kure1;
    Kure kure2;

    kure1.setKuvvet(20);
    kure1.setKutle(5);

    kure2.setKuvvet(16);
    kure2.setKutle(2);

    if(kure1.karsilastir(kure2))
        cout<<"kure1 ivmesi kure2 ivmesinden yuksektir."<<endl;
    else
        cout<<"kure1 ivmesi kure2 ivmesinden dusuktur."<<endl;

    return 0;
}