#include <iostream>
class sayici
{
private:
    static int sayac;
    int sayici_d;
public:
    sayici();
    int deger_al();
};
sayici::sayici(){
	sayici_d = sayac++;
	}
int sayici::deger_al(){
	return sayici_d;
}
int sayici::sayac = 1;

int main()
{
    sayici birinci;
    sayici ikinci;
    sayici ucuncu;

    std::cout << birinci.deger_al() << '\n';
    std::cout << ikinci.deger_al() << '\n';
    std::cout << ucuncu.deger_al() << '\n';
    return 0;
}