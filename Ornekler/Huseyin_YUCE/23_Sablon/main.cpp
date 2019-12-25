#include <iostream>
using namespace std;

template <typename T>
T artir(T x){
    return x+1;

};

template <typename T>
void yerdegistir(T&x, T&y){
    T temp = x;
    x= y;
    y= temp;
}

int main() {
    cout << artir(2) << endl;
    int a= 5;
    int b= 10;
    cout << a << "\t" <<  b << endl;
    yerdegistir(a,b);
    cout << a << "\t" <<  b << endl;
    char c1 = 'A';
    char c2 = 'B';
    cout << c1 << "\t" <<  c2 << endl;
    yerdegistir(c1,c2);
    cout << c1 << "\t" <<  c2 << endl;

    return 0;
}