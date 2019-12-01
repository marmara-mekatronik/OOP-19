#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Fifa_futbolcu_puani
{				//Oyunlarda olan rank sistemi ornek alindi.
public:
    int puan;
    int karsilastir (Fifa_futbolcu_puani x);
    static int NesneSayisi;
    Fifa_futbolcu_puani();
};

int Fifa_futbolcu_puani::NesneSayisi=0;

int Fifa_futbolcu_puani::karsilastir(Fifa_futbolcu_puani x){
    return this->puan > x.puan;
}

Fifa_futbolcu_puani::Fifa_futbolcu_puani(){
    cout<<"Nesne olusturuluyor."<<endl;
    NesneSayisi++;
}

int main (){
    int istek;
    Fifa_futbolcu_puani Futbolcu1;
    Fifa_futbolcu_puani Futbolcu2;

    while(1){
        cout<<"Oyunculari karsilastirak icin 1'e,programdan cikmak icin 2'ye olusturulan nesne sayisi icin 3'e basiniz. "<<endl;
        cin>>istek;

        if(istek==1){
            int En_Yuksek_Puan = 100, En_Dusuk_Puan = 35;
            srand (time (0));

            Futbolcu1.puan =rand () % (En_Yuksek_Puan - En_Dusuk_Puan + 1) + En_Dusuk_Puan;
            Futbolcu2.puan =rand () % (En_Yuksek_Puan - En_Dusuk_Puan + 1) + En_Dusuk_Puan;

            cout << "Ilk futbolcunun oyundaki gucu: " << Futbolcu1.puan << endl;
            cout << "Ikinci futbolcunun oyundaki gucu: " << Futbolcu2.puan << endl;

            if (Futbolcu1.karsilastir(Futbolcu2)){
                cout << "1.Futbolcunun gucu ikincininkinden fazladir."<<endl;
            }

            else {
                cout << "2.Futbolcunun gucu birincininkinden fazladir."<<endl;
            }
        }

        else if(istek==2){
            cout<<"Programdan cikiliyor.";
            return 0;
        }

        else if(istek==3){
            cout<<"Olusturulan nesne sayisi: "<<Fifa_futbolcu_puani::NesneSayisi<<endl;
        }

        else{
            cout<<"Yanlis tuslama yaptiniz.Programdan cikiliyor.";
            return 0;
        }
    }
}

//https://www.yusufsezer.com.tr/cpp-rastgele-sayi-uretme/
//Pc den sayi alabilmek icin kullandigim site yukaridadir. (37-41 kod satirlari arasi)