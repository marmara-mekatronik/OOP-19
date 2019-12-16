#include <iostream>
using namespace std;
class Sayilar{
public:
    virtual string Tanim_kumesi(){
        return 0;
    }
};
class Dogal_Sayilar: public Sayilar {
public:
    string Tanim_kumesi()  {
        return " {0,1,2,3,4,5,6,...} ";
    }
};
class Tam_Sayilar:public Sayilar{
public:
    string Tanim_kumesi() {
        return " {...,-3,-2,-1,0,1,2,3,...} ";
    }
};
class Reel_Sayilar:public Sayilar{
public:
    string Tanim_kumesi() {
        return " {... , ...} ";
    }
};

int main() {

    Sayilar *ptrDiziSayi[3];
    ptrDiziSayi[0]=new Dogal_Sayilar();
    ptrDiziSayi[1]=new Tam_Sayilar();
    ptrDiziSayi[2]=new Reel_Sayilar();

    for(int i=0;i<3;++i){
        cout<< ptrDiziSayi[i]->Tanim_kumesi()<< endl;
    }

    return 0;
}
