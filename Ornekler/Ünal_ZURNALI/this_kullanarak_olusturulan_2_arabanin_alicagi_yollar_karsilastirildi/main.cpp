#include <iostream>      //x=v*t denklemine göre en çok yol alan araba hangisidir?
using namespace std;
class yol{
public:
    yol (){
       hiz=0;
       zaman=0;
    }
    yol(int v,int t){
        hiz=v;
        zaman=t;
    }

    double get_yol();
    double karsilastir(yol yol1);
private:
    int alinan_yol,hiz,zaman;
};

double yol::get_yol() {
    return alinan_yol=hiz*zaman;
}
double yol::karsilastir(yol yol1){
    return this->get_yol()>yol1.get_yol();
}

int main() {
  yol araba1(60,5);
  yol araba2(1000,3);

  if(araba1.karsilastir(araba2)){
      cout<<"1 araba (alinan yol ):"<<araba1.get_yol()<<endl;
      cout<<"2 araba (alinan yol) :"<<araba2.get_yol()<<endl;
      cout<<"birinci arabanin aldigi yol ikinci arabanin aldigi yoldan daha fazladir"<<endl;
  }else {
      cout<<"1 araba (alinan yol ):"<<araba1.get_yol()<<endl;
      cout<<"2 araba (alinan yol) :"<<araba2.get_yol()<<endl;
      cout<<"ikinci arabanin aldigi yol birinci arabanin aldigi yoldan daha fazladir"<<endl;
  }
    return 0;
}