<<<<<<< HEAD
#include <iostream>
using namespace std;

class koni{
public:
    double yaricap;
    double yukseklik;
    double yanalUzunluk;
    void setAlan(double r, double h, double l);
    double getAlan(void);
    void setHacim(double r, double h);
    double getHacim(void);

    koni();
    ~koni();
private:
    double hacim;
    double alan;
};

void koni::setHacim(double r, double h) {
    double konihacim;
    konihacim=0.33*(3.14*r*r*h);
    hacim=konihacim;
}
double koni::getHacim() {
    return hacim;
}
void koni::setAlan(double r, double h, double l){
    double konialan;
    konialan=3.14*r*r+r*l;
    alan=konialan;
}
double koni::getAlan(void){
    return alan;
}
koni::koni(){
    cout<< "Nesne olusturuluyor."<<endl;
}
koni::~koni() {
    cout<< "Nesne siliniyor."<<endl;
}
int main() {
    string secenek;
    koni koni1;

    cout << "Koninin yuksekligini giriniz: ";
    cin>>koni1.yukseklik;
    cout << "Koninin yaricapini giriniz: ";
    cin>>koni1.yaricap;
    cout<< "Koninin yanal uzunlugunu giriniz: ";
    cin>>koni1.yanalUzunluk;
    koni1.setHacim(koni1.yaricap,koni1.yukseklik);
    koni1.setAlan(koni1.yaricap,koni1.yukseklik,koni1.yanalUzunluk);
    cout<<"Alan hesabı icin 'a', hacim hesabı icin 'h' yazınız: ";
    cin>>secenek;

    if(secenek=="a") cout<< "Koninin alani: "<<koni1.getAlan()<<endl;
    else cout << "Koninin hacmi: "<< koni1.getHacim()<<endl;



    return 0;
=======
#include <iostream>
using namespace std;

class koni{
public:
    double yaricap;
    double yukseklik;
    double yanalUzunluk;
    void setAlan(double r, double h, double l);
    double getAlan(void);
    void setHacim(double r, double h);
    double getHacim(void);

    koni();
    ~koni();
private:
    double hacim;
    double alan;
};

void koni::setHacim(double r, double h) {
    double konihacim;
    konihacim=0.33*(3.14*r*r*h);
    hacim=konihacim;
}
double koni::getHacim() {
    return hacim;
}
void koni::setAlan(double r, double h, double l){
    double konialan;
    konialan=3.14*r*r+r*l;
    alan=konialan;
}
double koni::getAlan(void){
    return alan;
}
koni::koni(){
    cout<< "Nesne olusturuluyor."<<endl;
}
koni::~koni() {
    cout<< "Nesne siliniyor."<<endl;
}
int main() {
    string secenek;
    koni koni1;

    cout << "Koninin yuksekligini giriniz: ";
    cin>>koni1.yukseklik;
    cout << "Koninin yaricapini giriniz: ";
    cin>>koni1.yaricap;
    cout<< "Koninin yanal uzunlugunu giriniz: ";
    cin>>koni1.yanalUzunluk;
    koni1.setHacim(koni1.yaricap,koni1.yukseklik);
    koni1.setAlan(koni1.yaricap,koni1.yukseklik,koni1.yanalUzunluk);
    cout<<"Alan hesabı icin 'a', hacim hesabı icin 'h' yazınız: ";
    cin>>secenek;

    if(secenek=="a") cout<< "Koninin alani: "<<koni1.getAlan()<<endl;
    else cout << "Koninin hacmi: "<< koni1.getHacim()<<endl;



    return 0;
>>>>>>> upstream/master
}