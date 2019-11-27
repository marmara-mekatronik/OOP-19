#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
class ciftmi {
public:
    int ciftMi(int sayi);
};

int ciftmi::ciftMi(int sayi) {

        if(sayi%2==0){
            return true;
        }
        else{
            return false;
        }
}

int main() {
 std::chrono::time_point<std::chrono::system_clock>start,end;   // bir kodun nekadr süre çalılştığını tutmak için için yazmamız gerekn kod satırır
 start= std::chrono::system_clock::now(); // burda önceki satırda oluşturulan start ve end değişkenlerini biz tanımladık. burda zamanın değeri start değişkenine atandı. artık içinde başlangı. zamanı
    ciftmi ciftmi1;
    int sayi;
    cout<<"sayi giriniz : "<<endl;
    cin>>sayi;

    if (ciftmi1.ciftMi(sayi)) {
        cout << sayi << "sayisi cift bir sayidir" << endl;
    }else{
        cout << sayi << "sayisi tek bir sayidir" << endl;
     }



        end = std::chrono::system_clock::now();// bu satırda ise az önce başlayan zamannın bitiş anını atadığımız değişken olan end.
    std::chrono::duration<double > gecen_zaman;// burda ise duration değişken değiştirmek için kullanılan metodumuz. bunları değiştirmezsek matematiksel işlemi yapamaz
    gecen_zaman=end-start;
    time_t baslangic_zamani=std::chrono::system_clock::to_time_t(start);
    time_t bitis_zamani=std::chrono::system_clock::to_time_t(end);


    std::cout<<  "toplam gecen zaman+veri girme suresi : " << gecen_zaman.count()<<" saniye"<<endl;
    return 0;
}