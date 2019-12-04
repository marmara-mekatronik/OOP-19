#include <iostream>
using namespace std;

class Sporcu {
public:
    Sporcu(double tk , double tyk);
    double YagOrani();
    int karsilastir (Sporcu sporcu);

private:
    double ToplamKilo;
    double ToplamYagKutle;

};

Sporcu::Sporcu(double tk, double tyk) {

    ToplamKilo=tk;
    ToplamYagKutle=tyk;

}
double Sporcu::YagOrani() {

    return (ToplamYagKutle/(ToplamYagKutle+ToplamKilo))*100;
}

int Sporcu::karsilastir(Sporcu sporcu) {

    return this -> YagOrani() > sporcu.YagOrani();
}


int main() {

    Sporcu Sporcu1(89,15);
    Sporcu Sporcu2(75,11);

    cout<<"1.Sporcu Yag Orani : %"<<Sporcu1.YagOrani()<< endl;

    cout<<"2.Sporcu Yag Orani : %"<<Sporcu2.YagOrani()<<endl;

    if (Sporcu1.karsilastir(Sporcu2))
    {

        cout<< "Birinci sporcunun yag orani daha yuksek"<< endl;

    }
    else
    {
        cout<<"Ikinci futbolcunun yag orani daha yuksek"<< endl;
    }


    return 0;
}