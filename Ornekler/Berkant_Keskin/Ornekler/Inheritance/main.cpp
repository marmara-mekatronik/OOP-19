#include <iostream>

using namespace std;

class Home_Measure {

protected:
    int width;
    int lenght;

public:
    void setHomeMeasure(int,int);
    int getHomeArea();
};
void Home_Measure::setHomeMeasure(int width, int lenght){

    this->width=width;
    this->lenght=lenght;
}

int Home_Measure::getHomeArea(){

    return width * lenght;
}
class Home_Price : public Home_Measure {
public:
    int m2price;
    int getHomePrice();

    void setm2price(int);
};

void Home_Price::setm2price(int m2price){
    this->m2price=m2price;

}
int Home_Price::getHomePrice(){

    return m2price * width * lenght;

}




int main(){
    Home_Price home1;

    home1.setHomeMeasure(12,8);
    home1.setm2price(1500);

    cout<<" home 1 price =  "<<home1.getHomePrice();


    return 0;


}


