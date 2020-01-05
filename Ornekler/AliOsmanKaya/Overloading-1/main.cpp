#include <iostream>
using namespace std;

class Film{

public:
    void setfilm(string a);
    void setfilm(int y);
    void setfilm(double p);

private:
    string ad;
    int yil;
    double puan;
};

void Film::setfilm(string a) {
    ad=a;
}

void Film::setfilm(double p) {
    puan=p;
}

void Film::setfilm(int y) {
    yil=y;
}

int main(){
    Film film;

    film.setfilm("The Irishman");
    film.setfilm(2019);
    film.setfilm(8.3);

}