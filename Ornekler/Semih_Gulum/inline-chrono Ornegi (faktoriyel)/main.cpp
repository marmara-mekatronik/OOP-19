#include <iostream>
#include <string>
#include <chrono>
#include <ctime>

using namespace std;
int a,faktoriyel=1;

chrono::time_point<chrono::system_clock>d_normals,d_normalf,d_inlines,d_inlinef;
// baslangic ve bitis icin start ve finish in bas harfleri pşan s ve f i vererek 4 tane degisken tanımladım.
chrono::time_point<chrono::system_clock>d_normals2,d_normalf2,d_inlines2,d_inlinef2;

void fakto(int){

            while (a!=0){
                faktoriyel=faktoriyel*a;
                a--;
            }
}

inline void inlinefakto(int){

    while (a!=0){
        faktoriyel=faktoriyel*a;
        a--;
    }
}

int main(){

    cout<<"Faktoriyelini istediginiz sayiyi giriniz: ";
    cin>>a;

    fakto(a);
    d_normals=chrono::system_clock::now();
    cout <<"\nGirdiginiz sayinin faktoriyeli: "<<faktoriyel<<"\n";
    d_normalf=chrono::system_clock::now();
    chrono::duration<double>normal_sure=d_normalf-d_normals;
    cout<<"Normal fonksiyonlu islemi yapma suresi: "<<normal_sure.count()<<"\n\n";

    inlinefakto(a);
    d_inlines=chrono::system_clock::now();
    cout<<"Girdiginiz sayinin faktoriyeli: "<<faktoriyel<<"\n";
    d_inlinef=chrono::system_clock::now();
    chrono::duration<double>inline_sure=d_inlinef-d_inlines;
    cout<<"Inline komutuyla yaptigimiz fonksiyonun islem suresi:"<<inline_sure.count()<<"\n\n";

    //Simdi aynı islemleri ikinciye yaptigimizdaki hızları karsilastiralim.
    //inline lı fonksiyon kopyalandigi icin suresini kisaltmasi gerekir.

    fakto(a);
    d_normals2=chrono::system_clock::now();
    cout <<"Girdiginiz sayinin faktoriyeli: "<<faktoriyel<<"\n";
    d_normalf2=chrono::system_clock::now();
    chrono::duration<double>normal_sure2=d_normalf2-d_normals2;
    cout<<"Normal fonksiyonluyla 2.kez ayni islemi yapma suresi: "<<normal_sure2.count()<<"\n\n";


    inlinefakto(a);
    d_inlines2=chrono::system_clock::now();
    cout<<"Girdiginiz sayinin faktoriyeli: "<<faktoriyel<<"\n";
    d_inlinef2=chrono::system_clock::now();
    chrono::duration<double>inline_sure2=d_inlinef2-d_inlines2;
    cout<<"Inline komutuyla 2. kez yaptigimiz fonksiyonun islem suresi:"<<inline_sure2.count()<<"\n\n";

    //inline seklinde kullanmamiz ,kullandigimiz fonksiyonun kopyalanmasi ve cagirildigi zaman
    //daha hizli bi sekilde gelmesiydi.Fonksiyonu for veya while ile tekrar sayisina bogmadigimiz
    //icin bu fark cok kucuk gozuktu.

    return 0;
}