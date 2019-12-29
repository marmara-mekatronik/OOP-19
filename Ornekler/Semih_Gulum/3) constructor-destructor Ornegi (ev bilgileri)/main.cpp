#include <iostream>
#include <string>
using namespace std;

class ev{         //ev class'ı oluşturuldu.
public:
    void setUcreti(int para);
    int getUcreti();
    void setBoyasi(string renk);
    string getBoyasi();

    ev(){          //Constructor yapısı olusturuldu.Bir deger dondurmedigi icin void'te tanimlandi.
        re="kirmizi";
    }

    ~ev(){  //Destructor yapisi olusturuldu.
        cout<<"\nEv bilgileri siliniyor.";
    }
    // hem constructor hem de destructor yapisi return tipi almadigi icin deklarasyonu
    //ev ve ~ev seklinde tanimlandi.(*Void dahi almazlar*)
private:
    int pa;
    string re;
};

void ev::setUcreti(int para){        //ev Class'inin altinda prototipi yapilan setUCreti(int para) fonksiyonu tanımlandi.
    pa=para;
}

int ev::getUcreti(){
    return pa;
}

void ev::setBoyasi(string renk){
    re=renk;
}

string ev::getBoyasi() {
    return re;
}

//Prototipi tanimlanan set'li fonksiyonlarin tanimlamasi yapildi.Class'in icideki
//degiskenler ile main'in icindeki degiskenler birbirine esitlendi.

int main(){

ev ev1;     //ev Class'inda bir ev1 nesnesi olusturuldu.
ev1.setUcreti(80000);
cout<<"\n1.Evin ucreti: "<<ev1.getUcreti();
ev1.setBoyasi("Bej");
cout<<"\n1.Evin duvarlarinin boyasi: "<<ev1.getBoyasi();

ev ev2;     //ev Class'inda bir ev2 nesnesi olusturuldu
ev2.setUcreti(55000);
cout<<"\n2.Evin ucreti: "<<ev2.getUcreti();
ev2.setBoyasi("Gri");
cout<<"\n2.Evin duvarlarinin boyasi: "<<ev2.getBoyasi();

//ev1 ve ev2 ile isimizi hallettikten sonra ~ev() Destruction
//fonksiyonu bu iki nesnemizi siliyor.
        return 0;
}
