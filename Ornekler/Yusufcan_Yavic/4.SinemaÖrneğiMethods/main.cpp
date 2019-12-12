#include <iostream>

using namespace std;

int salon[] = {1, 2, 3, 4};

double zaman[] = {2.21, 1.53, 2.13, 2.02};

string yonetmen[] = {"Ozer Feyzioglu", "Togan Gokbakar", "Mehmet Ada Oztekin", "Todd Phillips"};

string filmler[] = {"Cep Herkulu: Naim Suleymanoglu",
                    "Recep Ivedik 6",
                    "7. Kogustaki Mucize",
                    "Joker"};

string tur[] = {"Biyografi", "Komedi", "Dram", "Dram"};

int filmsalon(int s){
    return salon[s-1];
};

double filmzaman(int z){
    return zaman[z-1];
};

string filmyonetmen(int y){
    return yonetmen[y-1];
};

string filmtur(int t){
    return tur[t-1];
};

string filmsecim(int secim){
    return filmler[secim-1];
};

void filmadi() {
    int adyaz = 0;
    while (adyaz < 4) {
        cout << (adyaz + 1) << "." << filmler[adyaz] << endl;
        adyaz++;
    }
}

static void filmbilgi(int fbilgi){
    cout<<"Secilen Film:"<<filmler[fbilgi-1]<<endl;
    cout<<"Secilen Film Turu:"<<tur[fbilgi-1]<<endl;
    cout<<"Secilen Film Yonetmeni:"<<yonetmen[fbilgi-1]<<endl;
    cout<<"Secilen Film Suresi(Saat/Dakika):"<<zaman[fbilgi-1]<<endl;
    cout<<"Secilen Film Salonu:"<<salon[fbilgi-1]<<endl;
}

    int main(){


        string kul1;
        int sec1 = 0,sec2,sec3;
        sec2=5;
        double ucrettam=30.75;
        double ucretogr=25.75;
        double ucret;

        cout<<"********************"<<endl;
        cout<<"*** Sinema Giris ***"<<endl;
        cout<<"********************"<<endl;

        cout<<"Kullanici Adi:"<<endl;
        getline(cin, kul1);

        cout<<"Hosgeldin "<<kul1<<endl;

        for(; true ;) {

            cout<<"***********************"<<endl;
            cout<<"* Ne Yapmak Istersin: *"<<endl;
            cout<<"*   1.Filmleri Gor    *"<<endl;
            cout<<"*   2.Film Sec        *"<<endl;
            cout<<"*   3.Film Bilgileri  *"<<endl;
            cout<<"*   4.Bilet Al        *"<<endl;
            cout<<"*   5.Cik             *"<<endl;
            cout<<"***********************"<<endl;

            cin>>sec1;

            switch (sec1) {
                case 1:
                    filmadi();
                    break;

                case 2:
                    cout<<"***********************"<<endl;
                    cout<<"*   Film Seciminiz:   *"<<endl;
                    cout<<"***********************"<<endl;

                    cin>>sec2;
                    if(sec2<5) {
                        cout<<sec2 << ". Film:" << filmsecim(sec2)<<endl;
                    }
                    else{
                        cout<<"Hatali Film Secimi"<<endl;
                    }
                    break;

                case 3:
                    if(sec2<5){
                        filmbilgi(sec2);
                    }

                    else{
                        cout<<"************************"<<endl;
                        cout<<"*Hangi Filmin Bilgisini*"<<endl;
                        cout<<"*      Istersiniz?     *"<<endl;
                        cout<<"************************"<<endl;

                        cin>>sec2;

                        if(sec2<5){
                            filmbilgi(sec2);
                        }

                        else{
                            cout<<"Hatali Film Secimi";
                        }
                    }
                    break;

                case 4:

                    cout<<"*************************"<<endl;
                    cout<<"*    Ogrenci misiniz?   *"<<endl;
                    cout<<"*    1.EVET - 2.HAYIR   *"<<endl;
                    cout<<"*************************"<<endl;

                    cin>>sec3;

                    if(sec3==1){
                        ucret=ucretogr;
                        cout<<"*************************"<<endl;
                        cout<<"* Ogrenci Bileti Secimi *"<<endl;
                        cout<<"*************************"<<endl;
                    }

                    else{

                        ucret=ucrettam;

                        cout<<"*************************"<<endl;
                        cout<<"*   Tam Bilet Secimi    *"<<endl;
                        cout<<"*************************"<<endl;
                    }


                    cout<<"************************"<<endl;
                    cout<<"**  Bilet Basiliyor:  **"<<endl;
                    cout<<"************************"<<endl;
                    cout<<"* Izleyici Adi:"<<kul1<<endl;
                    cout<<"*************************"<<endl;
                    cout<<"* Ucret Tutari:"<<ucret<<endl;
                    cout<<"*************************"<<endl;
                    cout<<"* Film Adi:"<<filmsecim(sec2)<<endl;
                    cout<<"* Film Turu:"<<filmtur(sec2)<<endl;
                    cout<<"* Film Yonetmeni:"<<filmyonetmen(sec2)<<endl;
                    cout<<"* Film Suresi:"<<filmzaman(sec2)<<endl;
                    cout<<"* Film Salonu:"<<filmsalon(sec2)<<endl;
                    cout<<"*************************"<<endl;
                    cout<<"*************************"<<endl;



                    //break;

                default:

                    cout<<("***********************")<<endl;
                    cout<<("*     Iyi Gunler      *")<<endl;
                    cout<<("***********************")<<endl;
                    goto cik;

                    //break;
            }
        }

        cik:

        return 0;
    }
