//
// Created by ALİ OSMAN KAYA on 11.01.2020.
//

#ifndef HEADER_KURE_H
#define HEADER_KURE_H

#endif //HEADER_KURE_H

class Sekil{
protected:
    double hacim;
public:
    virtual double getHacim()=0;
};

class Kure:public Sekil{
    double yaricap;
public:
    Kure(double r);
    double getHacim();
};