#include <iostream>
using namespace std;

class Yigit {
public:
    virtual string yogurtYemeSekli() {
        return "Kaşıkla yiyorum !";
    }
};

class inegolYigidi : public Yigit {
public:
    string yogurtYemeSekli(){
        return "Yoğurdu köftenin üzerinde yerim. ";
    }
};
class rizeYigidi : public Yigit {
public:
    string yogurtYemeSekli(){
        return "Yoğurdu mısır ekmeğine karıştırarak yerim. ";
    }
};
class zonguldakYigidi : public Yigit {
public:
    string yogurtYemeSekli(){
        return "Yoğurdu mancara dökerek yerim. ";
    }
};


int main() {
    Yigit yigit;
    inegolYigidi Yusuf;
    zonguldakYigidi Unal;
    rizeYigidi Burhan;


    cout << "Çakma Yiğit : " << yigit.yogurtYemeSekli() <<endl;
    cout << "Yusuf : " << Yusuf.yogurtYemeSekli() <<endl;
    cout << "Burhan : " << Burhan.yogurtYemeSekli() <<endl;
    cout << "Ünal: " << Unal.yogurtYemeSekli() <<endl;


    return 0;
}