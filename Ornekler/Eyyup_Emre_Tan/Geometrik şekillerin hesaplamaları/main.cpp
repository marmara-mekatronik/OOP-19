#include <iostream>
#include <math.h>

using namespace std;

class küre{
public:
    void setyaricap(double r);
    double kürehacim();
    double küreyüzeyalani();
protected:
    double yaricap;
};
class küp{
public:
    void setkenar(double k);
    double küpalan();
    double küphacim();

protected:
    double kenar;
};
class silindir:public küre{
public:
    void setyukseklik(double y);
    double Shacim();

protected:
    double yukseklik;
};
class konik:public silindir{
public:
    double konikhacim();
};
class ücgen:public silindir{
public:
    void settaban(double t);
    double ücegenalan();
protected:
    double taban;
};
class dikdortgen{
public:
    void setkenar(double u, double k);
    double dikalan();

private:
    double ukenar,kkenar;
};

void küre::setyaricap(double r) {
    yaricap=r;
}
double küre::kürehacim() {
    double hacim,p;
    hacim=(4/3)*3.14;
    p=pow(yaricap,3);
    return (hacim*p);
}
double küre::küreyüzeyalani() {
    double y;
    y=pow(yaricap,2);
    return (y*4*3.14);
}
void küp::setkenar(double k) {
    kenar=k;
}
double küp::küpalan() {
    return (kenar*kenar*kenar);
}
double küp::küphacim() {
    return (6*kenar*kenar);
}
void silindir::setyukseklik(double y) {
    yukseklik=y;
}
double silindir::Shacim() {
    double phacim;
    phacim=pow(yaricap,2);
    return (3.14*phacim*yukseklik);
}
double konik::konikhacim() {
    double hcim;
    hcim=(1/3)*3.14;
    return (hcim*yaricap*yaricap*yukseklik);
}
void ücgen::settaban(double t) {
    taban=t;
}
double ücgen::ücegenalan() {
    double al;
    al=(taban*yukseklik)/2;
    return al;
}
void dikdortgen::setkenar(double u, double k) {
    ukenar=u;
    kkenar=k;
}
double dikdortgen::dikalan() {
    return (ukenar*kkenar);
}

int main(){
    küre küre1;
    küp küp1;
    silindir silindir1;
    konik konik1;
    ücgen ücgen1;
    dikdortgen dikdortgen1;

    double yaricap;
    double kenar;
    double yük;
    double taban;
    double ukenar,kkenar;
    cout<<"*******************************************"<<endl;
    cout<<"geometrik sekillerin ozelliklerin bulunmasi"<<endl;
    cout<<"*******************************************"<<endl;
    cout<<"gerekli olculerin alinmasi."<<endl;
    cout<<"yaricap giriniz:";
    cin>>yaricap;
    küre1.setyaricap(yaricap);
    cout<<"kupun kenar uzunlugunu giriniz:";
    cin>>kenar;
    küp1.setkenar(kenar);
    cout<<"yukseklik ozelligini giriniz:";
    cin>>yük;
    silindir1.setyukseklik(yük);
    cout<<"taban uzunlugu ozelligini giriniz:";
    cin>>taban;
    ücgen1.settaban(taban);
    cout<<"dikdortgenin uzun kenarini giriniz:";
    cin>>ukenar;
    cout<<"dikdortgenin kisa kenarini giriniz:";
    cin>>kkenar;
    dikdortgen1.setkenar(ukenar,kkenar);

    cout<<"**********************************************"<<endl;
    cout<<"---geometrik sekillerin ozellıklerı---"<<endl;
    cout<<"***kurenin hacimi:"<<küre1.kürehacim()<<endl;
    cout<<"***kurenin yuzeyalanı:"<<küre1.küreyüzeyalani()<<endl;
    cout<<"***kupun alani:"<<küp1.küpalan()<<endl;
    cout<<"***kupun hacimi:"<<küp1.küphacim()<<endl;
    cout<<"***silindirin hacimi:"<<silindir1.Shacim()<<endl;
    cout<<"***konigin hacimi:"<<konik1.konikhacim()<<endl;
    cout<<"***ucgenin alani:"<<ücgen1.ücegenalan()<<endl;
    cout<<"***dikdortgenin alani:"<<dikdortgen1.dikalan()<<endl;
    cout<<"***geometrik sekillerimizin özellikleri bulunmustur."<<endl;
    return 0;
}