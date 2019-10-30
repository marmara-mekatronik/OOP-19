#include <iostream>
using namespace std;

class ogrenci{
public:
    void setboy(double b);
    void setkilo(double k);
    void setnumara(int no);
    double getboy(void);
    double getkilo(void);
    int getnumara(void);
    ogrenci();

private:
    double boy;
    double kilo;
    int numara;
};

double ogrenci::getboy() {
    return boy;
}
double ogrenci::getkilo() {
    return kilo;
}
int ogrenci::getnumara() {
    return numara;
}
void ogrenci::setboy(double b) {
    boy=b;
}
void ogrenci::setkilo(double k) {
    kilo=k;
}
void ogrenci::setnumara(int no) {
    numara=no;
}
ogrenci::ogrenci() {
    cout<<"suanda nesne olusturuluyor."<<endl;
}
int main (){
    ogrenci ali;
    ali.setboy(1.70);
    ali.setkilo(65.5);
    ali.setnumara(170217853);
    cout<<"Alinin boyu:"<<ali.getboy()<<" kilosu:"<<ali.getkilo()<<" ve numarasi="<<ali.getnumara()<<endl;
}