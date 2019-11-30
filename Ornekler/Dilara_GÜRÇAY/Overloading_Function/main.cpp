#include <iostream>
using namespace std;

class kisi{
public:
    void setBilgi(string ad);
    void setBilgi(int y);
    void setBilgi(float b);
private:
    string isim;
    int yas;
    float boy;
};
void kisi::setBilgi(string ad){
    isim=ad;
}
void kisi::setBilgi(int y){
    yas=y;
}
void kisi::setBilgi(float b){
    boy=b;
}

int main() {
    string isim;
    int yasi;
    float boyu;

    kisi kisi1;
    cout<<"Ad: ";
    cin>>isim;
    kisi1.setBilgi(isim);
    cout<<"Yaş: ";
    cin>>yasi;
    kisi1.setBilgi(yasi);
    cout<<"Boy: ";
    cin>>boyu;
    kisi1.setBilgi(boyu);

    return 0;
}