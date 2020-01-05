//
// Created by Huseyin Yuce on 25.12.2019.
//

#include "ucgen.h"
Ucgen::Ucgen() : taban(0), yukseklik(0) {}
Ucgen::Ucgen(double tabanX, double yukseklikX) {
    taban = tabanX;
    yukseklik = yukseklikX;
    alan = taban * yukseklik;
}
double Ucgen::getAlan(){
    return alan;
}