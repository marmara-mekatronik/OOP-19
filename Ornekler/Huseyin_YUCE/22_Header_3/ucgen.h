//
// Created by Huseyin Yuce on 25.12.2019.
//

#ifndef INC_22_HEADER_3_UCGEN_H
#define INC_22_HEADER_3_UCGEN_H

#endif //INC_22_HEADER_3_UCGEN_H

class Sekil {
protected:
    double alan;
public:
    virtual double getAlan()=0;
};

class Ucgen: public Sekil{
private:
    double taban, yukseklik;
public:
    Ucgen();
    Ucgen(double tabanX, double yukseklikX);
    double getAlan();
};