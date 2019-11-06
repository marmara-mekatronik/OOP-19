#include<iostream>
#include<math.h>


using namespace std;
class ucgen
{
public:
    double hipotenus(int, int);
    double aci(int, int);

};

double ucgen::hipotenus(int dkenar1, int dkenar2)
{
    double pkenar1 = pow(dkenar1,2);
    double pkenar2 = pow(dkenar2,2);
    double kenar = pkenar1 + pkenar2;
    double hptns = sqrt(kenar);
    return hptns;
}
double ucgen::aci(int aci1, int aci2)
{
    double acisonucu=180-aci1-aci2;
    return acisonucu;
}
int main()
{

    int k1,k2;
    double kenarsonuc;
    double sonuc;
    int ac1,ac2;
    cout<<"*******ücgenin diger kenarını bulmak icin*******"<<endl;
    cout << "Birinci dik kenari giriniz:  ";
    cin >> k1;
    cout << endl;
    cout << "Ikinci dik kenari giriniz:  ";
    cin >> k2;
    cout << endl;
    ucgen kenarucgen;
    kenarsonuc = kenarucgen.hipotenus(k1, k2);

    cout << endl;
    cout << "Ucgenin hipotenusu= " << kenarsonuc << endl;

    cout<<endl;
    cout<<"******Ücgenin diger acisini bulmak icin******"<<endl;
    cout<<"Ucgenin birinci acisini giriniz:"<<endl;
    cin>>ac1;

    cout<<"Ucgenin birinci acisini giriniz:"<<endl;
    cin>>ac2;
    ucgen aciucgen;
    sonuc=aciucgen.aci(ac1,ac2);

    cout<<"Diger acimiz:"<<sonuc<<endl;
    return 0;
}