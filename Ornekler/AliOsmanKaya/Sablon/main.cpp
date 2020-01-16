#include <iostream>
using namespace std;

template <typename A>
A getAlan(A r){
    return 3.14*r*r;
}

template <typename A>
void yerdegistir(A &x, A &y){
    A z=x;
    x=y;
    y=z;
}

int main(){
    cout<<"Daire alani: "<<getAlan(3)<<endl;

    string c="herkez";
    string d="herkes";
    cout<<"dogru:"<<c<<"\nyanlis:"<<d<<endl;

    yerdegistir(c,d);

    cout<<"dogru:"<<c<<"\nyanlis:"<<d<<endl;
}