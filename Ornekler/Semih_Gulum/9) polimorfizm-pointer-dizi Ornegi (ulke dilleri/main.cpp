#include <iostream>
using namespace std;

class Diller{
public:
    virtual string ulke_dilleri();
private:
};

string Diller::ulke_dilleri(){
    return "Simdilik bilinmiyor.\n";
}

class Ispanya : public Diller{
public:
    string ulke_dilleri(){
        return "Ispanyolca";
    }
};

class Ingiltere : public Diller{
public:
    string ulke_dilleri(){
        return "Ingilizce";
    }
};

class Turkiye : public Diller{
public:
    string ulke_dilleri(){
        return "Turkce";
    }
};

class Japonya : public Diller{
public:
    string ulke_dilleri(){
        return "Japonca";
    }
};

int main(){
    Ispanya isp;
    Turkiye turk;
    Ingiltere ing;
    Japonya japon;


    // Normal bi sekilde sırayla yazdirmak istersek:
    cout<<"Normal yazdirma :\n"<<endl;
    cout<<""<<isp.ulke_dilleri()<<endl;
    cout<<""<<ing.ulke_dilleri()<<endl;
    cout<<""<<turk.ulke_dilleri()<<endl;
    cout<<""<<japon.ulke_dilleri()<<"\n"<<endl;


    // Pointer yardımıyla sırayla yazdirmak istersek:
    cout<<"Pointer yardimiyla:"<<endl;
    Diller *ptrDiller;
    ptrDiller = &isp;
    cout<<"\n"<<""<<ptrDiller->ulke_dilleri()<<endl;
    ptrDiller = &ing;
    cout<<""<<ptrDiller->ulke_dilleri()<<endl;
    ptrDiller = &turk;
    cout<<""<<ptrDiller->ulke_dilleri()<<endl;
    ptrDiller = &japon;
    cout<<""<<ptrDiller->ulke_dilleri()<<"\n"<<endl;



    // Dizi yardımıyla sırayla yazdırmak istersek:
    cout<<"Dizi yardimiyla:\n"<<endl;
    Diller *ptrDiziDiller[4];
    ptrDiziDiller[0]=new Ispanya();
    ptrDiziDiller[1]=new Ingiltere();
    ptrDiziDiller[2]=new Turkiye();
    ptrDiziDiller[3]=new Japonya();

    for(int i=0;i<4;++i){
        cout<<""<<ptrDiziDiller[i]-> ulke_dilleri()<< endl;
    }

    return 0;
}