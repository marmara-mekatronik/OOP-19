#include <iostream>
using namespace std;

class araba{
public:
    int setPara(int x);

protected:
    int ucret;
};

int araba::setPara(int x){
    ucret=x;
    return ucret;
}

class YerliOto : public araba{
public:
    YerliOto();
};

YerliOto::YerliOto(){
    cout<<"Cikis yili: 2020"<<endl;
}

int main()
{
    int parasi;
    YerliOto oto;
    parasi=oto.setPara(300);
    cout<<"Yerli Otomobilin fiyati : "<<parasi;

    return 0;
}
