#include <iostream>
using namespace std;

class Kisi {
protected:
    int numara_protected;
};
class AltKisi : public Kisi {

public:
    void setId(int numara)
    {
        numara_protected = numara;
    }

    void displayId()
    {
        cout << "Numara Koruyucu Budur: " << numara_protected << endl;
    }
};

int main()
{
    AltKisi Kisi1;
    int deger;
    cout<<"Deger Gir:"<<endl;
    cin>>deger;
    Kisi1.setId(deger);
    Kisi1.displayId();
    return 0;
}
