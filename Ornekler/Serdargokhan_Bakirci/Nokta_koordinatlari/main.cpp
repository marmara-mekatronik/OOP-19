#include <iostream>

using namespace std;

class nokta {
public:
    int x,y;
    void degerata(int,int);
    void ekranayaz();
    bool baslangictami();
};

void nokta::ekranayaz(){
    cout << x << "," << y << endl;
}

bool nokta::baslangictami(){
    return x==0 && y==0;
}

void nokta::degerata(int _x, int _y){
    x=_x;
    y=_y;
}

int main()
{
    nokta n1;
    nokta n2;
    n1.degerata(5,8);
    n1.ekranayaz();
    n2.degerata(0,0);
    n2.ekranayaz();

    if(n1.baslangictami())
        cout << "n1 baslangic noktasinda" << endl;

    if(n2.baslangictami())
        cout << "n2 baslangic noktasinda" << endl;

    return 0;
}