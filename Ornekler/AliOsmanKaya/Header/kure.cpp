//
// Created by ALİ OSMAN KAYA on 11.01.2020.
//

#include "kure.h"

Kure::Kure(double r) {
    yaricap=r;
}
double Kure::getHacim() {
    return 4*3.14*(yaricap*yaricap*yaricap)/3;
}