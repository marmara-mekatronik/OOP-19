#include <iostream>
using namespace std;

class Kare{
public:
    static int nesneSayisi;

    Kare(int k1, int k2);
    int getAlan();

private:
    int kenar1;
    int kenar2;
};
int Kare::nesneSayisi=0;

Kare::Kare(int k1, int k2) {
    cout<<"Yapici"<<endl;
    kenar1=k1;
    kenar2=k2;
    nesneSayisi++;
}
int Kare::getAlan() {
    return kenar1*kenar2;
}
int main(){
    Kare kare1(4,5);
    Kare kare2(3,8);

    cout<<"Toplam nesne: "<<Kare::nesneSayisi<<endl;
    cout<<kare1.nesneSayisi<<endl;
    cout<<kare2.nesneSayisi;
}