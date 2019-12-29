#include <iostream>
using namespace std;

class Daire_Hesaplamalari{

private:
    int yaricap;

public:
    void setYaricap(int x);
    int get();
    int alan();
    int cevre();
};

void Daire_Hesaplamalari :: setYaricap(int x){
    yaricap=x;
}

int Daire_Hesaplamalari:: get(){
    return yaricap;
}

int Daire_Hesaplamalari::cevre(){
    return (2*(3.14)*yaricap);
}

int Daire_Hesaplamalari::alan(){
    return ((3.14)*yaricap*yaricap);
}

int main(){
    Daire_Hesaplamalari daire;
    daire.setYaricap(10);
    cout<<"Yaricapini girdiginiz dairenin alani : "<<daire.alan()<<endl;
    cout<<"Yaricapini girdiginiz dairenin cevresi : "<<daire.cevre()<<endl;

    return 0;
}