#include <iostream>

using namespace std;
const float pi = 3.14;
class silindir{
private:
    float yaricap;
public:
    float r;
    float h;
    float alan;
    float hacim;
    void alanhesap();
    void hacimhesap();
    void setYaricap(float r);
    float getYaricap(void);

    silindir();
    ~silindir();

    void verigiris(){
        cout<<"Yuksekligi girin(mm):";
        cin>>h;
    }

};
void silindir::setYaricap(float r)
{yaricap=r;}
float silindir::getYaricap(void){
    return yaricap;}


void silindir::alanhesap(){
    alan=(2*pi*yaricap*h)+(2*pi*yaricap*yaricap);
    cout<<"Silindirin alani(mm^2)="<<alan<<endl;
}
void silindir::hacimhesap(){
    hacim=(pi*yaricap*yaricap*h);
    cout<<"Silindirin hacmi(mm^3)="<<hacim<<endl;}


silindir::silindir(){
    cout<<"Yaricapi 10mm olan bir silindir olusturuluyor..."<<endl;
}
silindir::~silindir(){
}


int main(){
    silindir s;
    s.setYaricap(10.0);
    cout<<"Yaricap(mm):"<<s.getYaricap()<<endl;
    s.verigiris();
    s.alanhesap();
    s.hacimhesap();
    return 0;
}