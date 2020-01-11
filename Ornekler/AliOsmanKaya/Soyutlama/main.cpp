#include <iostream>
using namespace std;

class Film{
public:
    virtual void filmAdi()=0;
    virtual void yonetmen()=0;
    virtual void oyuncu()=0;
};

class Matrix1:public Film{
    void filmAdi(){cout<<"Matrix:1"<<endl;}
    void yonetmen(){cout<<"Wachowski Kardesler"<<endl;}
    void oyuncu(){cout<<"Keanu Reeves, Carrie-Anne Moss"<<endl;}
};

class Matrix2:public Matrix1{
    void filmAdi(){cout<<"Matrix:2"<<endl;}
};

class VforVendetta:public Film{
    void filmAdi(){cout<<"V for Vendetta"<<endl;}
    void yonetmen(){cout<<"James McTeigue"<<endl;}
    void oyuncu(){cout<<"Hugo Weaving, Natalie Portman"<<endl;}
};

int main(){
    Film *dizi[3];
    dizi[0]=new Matrix1;
    dizi[1]=new Matrix2;
    dizi[2]=new VforVendetta;

    for(int i=0;i<3;i++){
        dizi[i]->filmAdi();
        dizi[i]->yonetmen();
        dizi[i]->oyuncu();
    }
}