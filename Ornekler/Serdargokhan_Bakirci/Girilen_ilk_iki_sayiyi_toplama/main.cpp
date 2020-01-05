#include <iostream>
using namespace std;
class A
{
public:
    int ekle(int x, int y, int z)
    {
        return (x + y + z);
    }
};
class B : public A
{
public:
    int ekle(int x, int y, int z)
    {
        cout << "Birinci sayi: " << x << endl;
        cout << "Ikinci sayi:" << y << endl;
        cout << "Ucuncu sayi:" << z << endl;
        return (x + y);
    }
};
int main()
{
    B B1;
    int q, w, r;
    cout << "Uc sayi giriniz: " << endl ;
    cin >> q >> w >> r;

    cout << "Girilen ilk iki sayinin toplami: " << B1.ekle(q, w, r) << endl;
    return 0;
}