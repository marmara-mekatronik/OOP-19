#include <iostream>

using namespace std;
class ATMislemleri{
private:
    int ozel=7475; // Belirlenen şifre
public:
    int secenek;//seçilen işlem numarası
    int tutar;  //çekilen tutar
    int ytutar; //yatırılan tutar
    int sifre; //kart şifresi
    int eskisifre;
    int yenisifre;
    int yenisifretekrar;
    void kullanicisifre(){


        cin>>sifre;

        if(sifre==ozel){
            cout<<"Hosgeldiniz!\n"<<"\nLutfen yapmak istediginiz islemi seciniz"<< endl;
            cout<<"(1)Para cekme"<<"               (2)Para yatirma\n"<<endl;
            cout<<"(3)Sifre degistirme"<<endl;


            cin>>secenek;

            cout<<"İsleminiz gerceklestiriliyor..."<<endl;
            if(secenek==1){

                cout<<"\nLufen cekmek istediginiz tutari yazininiz"<<endl;
                cin>>tutar;
                cout<<tutar<<"TL veriliyor..Lutfen bekleyiniz..."<<endl;

            }
            if(secenek==2){

                cout<<"\nLufen yatirmak istediginiz tutari yaziniz."<<endl;
                cin>>ytutar;
                cout<<ytutar<<" hesabiniza tanimlaniyor"<<endl;
                cout<<"İslem basariyla gerceklestirilmistir"<<endl;

            }
            if(secenek==3){

                cout<<"Lufen eski sifrenizi giriniz:"<<endl;
                cin>>eskisifre;

                if(eskisifre==ozel) //sifre=ozel yapmıştık
                {

                    cout<<"Lufen yeni sifrenizi giriniz:"<<endl;
                    cin>>yenisifre;
                    cout<<"Lufen yeni sifrenizi tekrar giriniz:"<<endl;
                    cin>>yenisifretekrar;

                    if(yenisifre==yenisifretekrar){

                        sifre=yenisifre;
                        cout<<"Sifreniz basariyla degistirilmistir"<<endl;

                    }
                    else{
                        cout<<"Sifreler birbiri ile uyusmuyor"<<endl;
                    }
                }
            }
        }
        else{
            cout<<"Sifreniz yanlis girilmistir"<<endl;
        }
    }

};
int main() {

    ATMislemleri sifre;
    cout<<"Lutfen sifrenizi giriniz:"<<endl;
    sifre.kullanicisifre();

    return 0;
}