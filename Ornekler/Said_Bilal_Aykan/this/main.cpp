#include <iostream>

using namespace std;
class Urun{
public:
    Urun(double kg=0.5);
    double tarti ();
    int denetleme(Urun urun);
private:
    double kilo;
};

Urun::Urun(double kg)
{ cout << "Urun tartiliyor" << endl;
    kilo=kg;}

double Urun::tarti()
{return kilo;}

int Urun::denetleme(Urun urun)
{ return this->tarti()>urun.tarti() ;}

int main() {
    Urun istenenagirlik(0.50);
    Urun Urun1(0.48);
    if(Urun1.denetleme(istenenagirlik))
    {
        cout << "Urun olmasi gerekenden daha agir.Tekrar uretime gonderildi..." << endl;
    }
    else if(istenenagirlik.denetleme(Urun1))
    {cout << "Urun olmasi gerekenden daha hafif.Tekrar uretime gonderildi... " << endl;
    }
    else {
        cout << "Urun olmasi gereken agirlikta.Paketleme bolumune gonderildi... " << endl;
    }

}