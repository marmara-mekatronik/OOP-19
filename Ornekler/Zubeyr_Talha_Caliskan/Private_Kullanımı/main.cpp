#include <iostream>
using  namespace std;

class Top
{

    private:
        double yari_cap;

    public:

        void alan_hesaplama(double r)
        {
            yari_cap = r;

            double yuzey_alani = 4*3.14*r*r;

            cout << "Yari Capi: " << yari_cap<< endl;
            cout << "Yuzey Alani: " << yuzey_alani;
        }

};


int main()
{

    // Top sinifinda Futbol nesnesi olusturuldu
   Top Futbol;
    //Fonksiyon cagirilarak istenilen yaricap girilir.
    Futbol.alan_hesaplama(1.5);


    return 0;
    // KAYNAK:    https://www.geeksforgeeks.org/access-modifiers-in-c/
}
