#include<iostream>
using namespace std;
class kapsul{
private:
    int sayi;
    char karakter;
public:
    int getSayi() const {
        return sayi;
    }
    char getKarakter() const {
        return karakter;
    }
    void setSayi(int sayi) {
        this->sayi = sayi;
    }
    void setKarakter(char karakter) {
        this->karakter = karakter;
    }
};
int main(){
    kapsul kapsul1;
    kapsul1.setSayi(100);
    kapsul1.setKarakter('A');
    cout<<kapsul1.getSayi()<<endl;
    cout<<kapsul1.getKarakter()<<endl;
    return 0;
}