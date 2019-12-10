#include <iostream>
using namespace std;
class Hayvan{
public:
    //virtual string konusma(){
    string konusma(){
        return "Konusamiyor!";
    }
};
class Kedi: public Hayvan {
public:
    string konusma()  {
        return "Miyav Miyav!";
    }
};
class Kopek:public Hayvan{
public:
    string konusma() {
        return "Hav Hav!";
    }
};
int main() {
   Hayvan hayvan;
   Kedi kedi;
   Kopek kopek;
    cout << "Hayvan: " << hayvan.konusma() << endl;
    cout << "Hayvan: " << kedi.konusma() << endl;
    cout << "Hayvan: " << kopek.konusma() << endl;
    cout << "----------------------------" << endl;
    Hayvan *ptrHayvan;
    ptrHayvan =  &hayvan;
    cout << "Hayvan: " << ptrHayvan->konusma() << endl;
    ptrHayvan =  &kedi;
    cout << "Hayvan: " << ptrHayvan->konusma() << endl;

    return 0;
}