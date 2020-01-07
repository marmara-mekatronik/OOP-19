#include <iostream>
#include <math.h>

using namespace std;

class Ucgen{
public:
    Ucgen();
    double x, y;
    void verigiris();
    void setHipotenus(double h){
        hip=h;	};
protected:
    double hip;

};
Ucgen::Ucgen(){cout<<"Dik bir ucgen olusturuluyor... "<<endl;
};
void Ucgen::verigiris(){cout<<"x degerini girin:";
    cin>>x;
    cout<<endl<<"y degerini girin:";
    cin >>y;
}



class Hipotenus: public Ucgen {
public:
    double getHipotenus(){hip=((x*x)+(y*y));
        return sqrt(hip);	}
};

int main() {
    Hipotenus hesap;
    hesap.verigiris();
    cout<<endl<<"UCGENIN HIPOTENUSU="<<hesap.getHipotenus()<< endl;
    return 0;
}