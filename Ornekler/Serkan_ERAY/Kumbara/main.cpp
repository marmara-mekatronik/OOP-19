<<<<<<< HEAD
#include <iostream>
#include <fstream>
using namespace std;
class kumbara{
private:
    float iPara=85.25;

public:

    double atilanpara;

    void setAtilanPara(float deger){
        iPara = iPara+deger;

    }

    double yeniPara(){
        return iPara;
    }

};
int main() {
    kumbara kumbara1;
    cout<<"Atilacak miktari giriniz: ";
    cin>>kumbara1.atilanpara;
    cout<<"Mevcut para: "<<kumbara1.yeniPara()<<endl;
    kumbara1.setAtilanPara(kumbara1.atilanpara);
    cout<<"Yeni para: "<<kumbara1.yeniPara()<<endl;
    return 0;
=======
#include <iostream>
#include <fstream>
using namespace std;
class kumbara{
private:
    float iPara=85.25;

public:

    double atilanpara;

    void setAtilanPara(float deger){
        iPara = iPara+deger;

    }

    double yeniPara(){
        return iPara;
    }

};
int main() {
    kumbara kumbara1;
    cout<<"Atilacak miktari giriniz: ";
    cin>>kumbara1.atilanpara;
    cout<<"Mevcut para: "<<kumbara1.yeniPara()<<endl;
    kumbara1.setAtilanPara(kumbara1.atilanpara);
    cout<<"Yeni para: "<<kumbara1.yeniPara()<<endl;
    return 0;
>>>>>>> upstream/master
}