#include <iostream>
#include <cmath>
#define pi 3
using namespace std;

class daire{
private:                         //bir sınıf oluşturulduğunda private kullanılmasa da public dışındaki herşey private olur.
    int yaricap;                //bu değişken private altında olduğu için dışarıdan bunu çağıramaz veya buna erişemeyiz.
                               //bu nedenle de önce puplic altında "cap" değiskenine set fonk. ile değer atayıp (sınıf içinde private değişkenine erişebiliyoruz)
                              //istersek de get fonk. ile alabilir(burada  sadece birini de kullanabliriz), son olarak da dışardan bu fonk. çağırabiliriz.
public:
    void setR(int r){       // setR olarak oluşturulan fonk. içinden yaricap değişkenine r değişkenini atamış olduk, böylelikle bu değişkene atıyacağımız değer, private değişkenine atanmış olacak.
       yaricap=r;
    }

    int getR() {
        return yaricap;
    }
    int alan () {
        return (yaricap * yaricap * pi);
                    }
       int cevre(){
           return (2*pi*yaricap);
                     }
}circle;                                      // burada daire sınıfından bir nesne oluşturuldu.

int main(){
    circle.setR(20);
    cout<<"dairenin yaricapi: "<<circle.getR()<<endl;

         cout<<"dairenin alani: "<<circle.alan()<<endl;
             cout<<"dairenin cevresi: "<<circle.cevre()<<endl;
             return 0;
          }
