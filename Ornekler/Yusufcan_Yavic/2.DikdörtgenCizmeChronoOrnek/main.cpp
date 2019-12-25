#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;
int main() {

    int m,n,a,i,j,k;
    cout<<"Satir sayisi:"<<endl;
    cin>>m;
    cout<<"Sutun sayisi:"<<endl;
    cin>>n;

    std::chrono::time_point<std::chrono::system_clock> d_basla, d_son;
    d_basla = std::chrono::system_clock::now();

    a=(n-2)*2+1;
    for (i=0;i<n;i++)
    {
        printf("* ");
    }
    printf("\n");
    for (j=0;j<(m-2);j++)
    {
        printf("*");
        for(k=0;k<a;k++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(i=0;i<n;i++){
        printf("* ");
    }


    d_son = std::chrono::system_clock::now();
    std::chrono::duration<double> gecen_zaman = d_son - d_basla;
    std::time_t baslangic_zamani = std::chrono::system_clock::to_time_t(d_basla);
    std::time_t bitis_zamani = std::chrono::system_clock::to_time_t(d_son);



    cout <<endl<< "Program baslama zamani : " << std::ctime(&baslangic_zamani) << endl;
    cout << "Program bitis zamani : " << std::ctime(&bitis_zamani) << endl;
    cout << "Program gecen sure : " << gecen_zaman.count() << " saniye" << endl;


    return 0;
}