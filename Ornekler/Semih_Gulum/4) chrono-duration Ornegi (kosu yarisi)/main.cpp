#include <iostream>
#include <chrono>
#include <string>
#include <ctime>

//Her kosucunun ayni anda yarisa basladigi ve bitislerini ise kullanicidan alacagi sonrasında da siralayacagi kodu yazalim.

using namespace std;

class kosucular{
public:
    string Elcin;
    string Cengiz;
    string Yaren;
};

int main(){
    int secenek;
    int buton;
    chrono::time_point<chrono::system_clock> d_baslangic,d_bitis_elcin,d_bitis_cengiz,d_bitis_yaren;
    time_t baslangic_zamani = chrono::system_clock::to_time_t(d_baslangic);

    cout<<"3 kosucumuz yarisa baslamistir.Bitis cizgisini gectikleri zaman \nyapilmasi gereken asamalar asagida verilmistir.\n";
    cout<<"\n--> Bitis cizgisini gectikleri zaman sizden bazi tuslamalari yapmanizi isteyecegiz.\n";
    cout<<"--> Eger elcin gecerse 1'e,Cengiz gecerse 2'ye Yaren gecerse 3'e basiniz. \n";
    cout<<"--> Herkes yarisi bitirince 9'a basiniz.";
    cout<<"--> Bu uygulamayi herkes yarisi tamamlayana kadar devam ediniz.\n";

    for(int i=0; i<1; i++){
        cout<<"\nHazir oldugunuzda 0'a basarak kosuyu baslatiniz.Programdan cikmak isteseniz 9'a basiniz.";
        cin>>secenek;
        if(secenek==0){
            d_baslangic=chrono::system_clock::now();
            cout<<"Yaris an itibariyle basladi.\nLutfen yarismacilar kosuyu bitirdikce gereken tuslamalari yapiniz.\n";
            for(int j=0; j<3;j++){
                cin>>buton;
                if(buton==1){
                    d_bitis_elcin=chrono::system_clock::now();
                    cout<<"An itibari ile elcin yarisi bitirmistir.\n";
                }
                if (buton==2){
                    d_bitis_cengiz=chrono::system_clock::now();
                    cout<<"An itibari ile cengiz yarisi bitirmistir.\n";
                }
                if(buton==3){
                    d_bitis_yaren=chrono::system_clock::now();
                    cout<<"An itibari ile yaren yarisi bitirmistir.\n";
                }
                if(buton==9) {
                    cout<<"Yaris bitmistir.";
                    break;
                }
            }
        }

        if(secenek==9){
            false;
        }
    }

    chrono::duration<double> bitis_suresi_elcin=d_bitis_elcin-d_baslangic;
    chrono::duration<double> bitis_suresi_cengiz=d_bitis_cengiz-d_baslangic;
    chrono::duration<double> bitis_suresi_yaren=d_bitis_yaren-d_baslangic;

    cout<<"\nElcin'in yarisi bitirme suresi: "<<bitis_suresi_elcin.count()<<" saniye";
    cout<<"\nCengiz'in yarisi bitirme suresi: "<<bitis_suresi_cengiz.count()<<" saniye";
    cout<<"\nYaren'in yarisi bitirme suresi: "<<bitis_suresi_yaren.count()<< "saniye\n\n";

    if(bitis_suresi_elcin.count()<bitis_suresi_cengiz.count()&&bitis_suresi_elcin.count()<bitis_suresi_yaren.count()){
        if(bitis_suresi_cengiz.count()<bitis_suresi_yaren.count()){
            cout<<"1.Elcin\n2.Cengiz\n3.Yaren";
        }
        else if (bitis_suresi_cengiz.count()>bitis_suresi_yaren.count()){
            cout<<"1.Elcin\n2.Yaren\n3.Cengiz";
        }
    }
    if(bitis_suresi_cengiz.count()<bitis_suresi_elcin.count()&&bitis_suresi_cengiz.count()<bitis_suresi_yaren.count()){
        if(bitis_suresi_elcin.count()<bitis_suresi_yaren.count()){
            cout<<"1.Cengiz\n2.Elcin\n3.Yaren";
        }
        if(bitis_suresi_elcin.count()>bitis_suresi_yaren.count()){
            cout<<"1.Cengiz\n2.Yaren\n3.Elcin";
        }
    }
    if(bitis_suresi_yaren.count()<bitis_suresi_cengiz.count()&&bitis_suresi_yaren.count()<bitis_suresi_elcin.count()){
        if(bitis_suresi_cengiz.count()<bitis_suresi_elcin.count()){
            cout<<"1.Yaren\n2.Cengiz\n3.Elcin";
        }
        if(bitis_suresi_cengiz.count()>bitis_suresi_elcin.count()){
            cout<<"1.Yaren\n2.Elcin\n3.Cengiz";
        }
    }
    return 0;
}