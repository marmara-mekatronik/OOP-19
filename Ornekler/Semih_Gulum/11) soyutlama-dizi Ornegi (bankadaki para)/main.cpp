#include <iostream>
using namespace std;

class banka_hesabi{
protected:
    string a;
    double b,c;

public:
    virtual string kisi_adi ()=0;
    virtual double bankadaki_para()=0;
    virtual double aylik_gelir ()=0;

};


class Kisi1 : public banka_hesabi {
public:
    string kisi_adi();
    double bankadaki_para();
    double aylik_gelir();

};

string Kisi1 :: kisi_adi(){
    return "Semih";
}

double Kisi1 :: bankadaki_para(){
    return 1000;
}

double Kisi1 :: aylik_gelir(){
    return 800;
}



class Kisi2 : public banka_hesabi {
public:
    string kisi_adi();
    double bankadaki_para();
    double aylik_gelir();
};

string Kisi2 :: kisi_adi(){
    return "Melih";
}

double Kisi2 :: bankadaki_para(){
    return 5200;
}

double Kisi2 :: aylik_gelir(){
    return 1200;
}



class Kisi3 : public banka_hesabi {
public:
    string kisi_adi();
    double bankadaki_para();
    double aylik_gelir();
};

string Kisi3 :: kisi_adi(){
    return "Samet";
}

double Kisi3 :: bankadaki_para(){
    return 2762;
}

double Kisi3 :: aylik_gelir(){
    return 1780;
}



int main(){
    Kisi1 semih;
    Kisi2 melih;
    Kisi3 samet;

    //Dizi ile yazdirmak istersek:
    banka_hesabi *Dizi[3];
    Dizi[0]=new Kisi1;
    Dizi[1]=new Kisi2;
    Dizi[2]=new Kisi3;
    for (int i=0;i<3;i++){
        Dizi[i]->kisi_adi();
        Dizi[i]->bankadaki_para();
        Dizi[i]->aylik_gelir();

        cout<<""<<(i+1)<<". Kisinin adi: "<<Dizi[i]->kisi_adi()<<endl;
        cout<<""<<(i+1)<<". Kisinin bankadaki parasi: "<<Dizi[i]->bankadaki_para()<<endl;
        cout<<""<<(i+1)<<". Kisinin harcadigi para: "<<Dizi[i]->aylik_gelir()<<"\n"<<endl;
    }
    
    return 0;
}