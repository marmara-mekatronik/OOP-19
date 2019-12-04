#include <iostream>
using namespace std;

class Film{
    string adi;
    double imdb;
    string yonetmen;

public:
    void setAdi(string ad);
    void setImdb(double i);
    void setYonetmen(string y);

    string getAdi(){
        return adi;
    }
    string getYonetmen(){
        return yonetmen;
    }
    double getImdb(){
        return imdb;
    }
};
void Film::setAdi(string ad) {
    adi=ad;
}
void Film::setImdb(double i) {
    imdb=i;
}
void Film::setYonetmen(string y) {
    yonetmen=y;
}

int main(){
    Film film;

    film.setAdi("the irishman");
    film.setImdb(8.4);
    film.setYonetmen("Martin Scorsese");

    cout<<film.getAdi()<<endl;
    cout<<film.getImdb()<<endl;
    cout<<film.getYonetmen()<<endl;
}
