#include <iostream>

using namespace std;
class Zaman{
public:
    Zaman(){
        saat=0;
        dakika=0;
    }
    Zaman(int s, int d){
        saat = s;
        dakika = d;
    }
    Zaman operator++(){
        ++dakika;
        if (dakika >=60){
            ++saat;
            dakika -= 60;
        }
        return Zaman(saat,dakika);
    }
    Zaman operator++(int){
        Zaman Z(saat, dakika);
        ++dakika;
        if (dakika >= 60){
            ++saat;
            dakika -=60;
        }
        return Z;
    }

    void gosterZaman();

private:
    int saat;
    int dakika;
};
void Zaman::gosterZaman() {
    cout << saat << ":" << dakika << endl;
}
int main() {
    Zaman Z1(11,59), Z2(10,40);
    Z1.gosterZaman();
    Z2.gosterZaman();

    ++Z1;
    Z1.gosterZaman();
    ++Z1;
    Z1.gosterZaman();

    cout<<"--------------"<<endl;

    Z2++;
    Z2.gosterZaman();
    Z2++;
    Z2.gosterZaman();

    return 0;
}