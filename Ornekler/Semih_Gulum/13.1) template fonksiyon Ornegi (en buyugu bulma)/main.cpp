#include <iostream>
using namespace std;

template <typename degisken>
degisken en_buyuk (degisken x,degisken y,degisken z){

    if(x>y){

        if(x>z){
            return x;
        }

        else{
            return z;
        }
    }

    else{

        if(y>z){
            return y;
        }

        else{
            return z;
        }

    }


}

int main(){
    int a=120;
    double b=32.5;
    float c=453.543;

    cout<<"Girdiginiz sayilardan en buyugu :"<<en_buyuk<float>(a,b,c)<<endl;

    return 0;
}