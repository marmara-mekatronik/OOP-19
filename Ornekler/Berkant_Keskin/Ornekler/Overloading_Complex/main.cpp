#include <iostream>

using namespace std;

class Complex{

private:
    int reel,ima;
public:
    void set(int,int);
    Complex operator+(Complex &a){
        Complex answer;
        answer.reel=this->reel + a.reel;
        answer.ima=this->ima + a.ima;

        return answer;
    }

    void ShowOnScreen();

};

void Complex::set( int reell , int imag){
    reel=reell;
    ima=imag;

}


void Complex::ShowOnScreen(){

    cout  << reel << "  +  "<< ima << "i";


}

int main(){
    Complex complex1,complex2;
    Complex complex3;
    complex1.set(9,4);
    complex2.set(7,4);
    complex3= complex1 + complex2;
    complex3.ShowOnScreen();



    return 0;

}