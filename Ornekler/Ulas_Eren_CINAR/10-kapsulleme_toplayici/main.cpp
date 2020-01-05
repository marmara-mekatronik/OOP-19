#include <iostream>

using namespace std;

class Ekleyici {
public:

    Ekleyici(int a = 0) {
        toplam = a;
    }

    void ekleSayi(int sayi) {
        toplam += sayi;
    }

    int toplami_al() {
        return toplam;
    };

private:

    int toplam;
};

int main() {
    Ekleyici a;

    a.ekleSayi(10);
    a.ekleSayi(25);
    a.ekleSayi(39);

    cout << "toplam " << a.toplami_al() <<endl;
    return 0;
}