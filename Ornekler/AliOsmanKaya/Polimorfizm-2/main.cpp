#include <iostream>
using namespace std;

class Film{
public:
    virtual string filmAdi(){
        return "Adi yok!!";
    }
};

class LOTR:public Film{
public:
    string filmAdi(){
        return "Lord Of The Rings:The Fellowship of the Ring";
    }
};

class StarWars:public Film{
public:
    string filmAdi(){
        return "Star Wars:A New Hope";
    }
};

class Matrix:public Film{
public:
    string filmAdi(){
        return "Matrix";
    }
};

int main(){
    Film *ptrDiziFilm[3];
    ptrDiziFilm[0]=new LOTR();
    ptrDiziFilm[1]=new StarWars();
    ptrDiziFilm[2]=new Matrix();

    for(int i=0;i<3;i++){
        cout<<ptrDiziFilm[i]->filmAdi()<<endl;
    }
    return 0;
}