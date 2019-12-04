<<<<<<< HEAD

# Kapsülleme (Encapsulation):

Kapsülleme bir programda ki bazý özelliklerin veya iþlevlerin diðer kullanýcýlardan saklamasýdýr. 
Yani bir sýnýf da (class) bulunan özelliklerin (properties) ve metotlarýn (methods) mümkün olabildiðince
gizlemektir ve eriþimini engellemektir. Zaten saklanan kýsýmlarý kullanýcýnýn bilmesine gerek yoktur. 
Örnek vermek istersek televizyonu bir program, kumanda ve tuþ takýmýný açýkta (public) ve televizyonun
içindeki yapýlarýnda gizli (private) olarak düþünebiliriz.

## Uygulama

  

using namespace std;  
class ExampleEncap{  
private: /*Burada yazan kodlar özelldir.   Sýnýf dýþýndakiler eriþemez */  
int num;  
char ch;  
public: /*bu kýsma yazýlan kodlar kullanýcýdan veri almak için kullanýlýr.  
*herkes eriþebilir */  
int getNum() const {  
return num;  
}  
char getCh() const {  
return ch;  
}  
void setNum(int num) {  
this->num = num;  
}  
void setCh(char ch) {  
this->ch = ch;  
}  
};  
int main(){  
ExampleEncap obj;  
obj.setNum(100);  
obj.setCh('A');  
cout<<obj.getNum()<<endl;  
cout<<obj.getCh()<<endl;  
return 0;  
}
=======

# KapsÃ¼lleme (Encapsulation):

KapsÃ¼lleme bir programda ki bazÄ± Ã¶zelliklerin veya iÅŸlevlerin diÄŸer kullanÄ±cÄ±lardan saklamasÄ±dÄ±r. 
Yani bir sÄ±nÄ±f da (class) bulunan Ã¶zelliklerin (properties) ve metotlarÄ±n (methods) mÃ¼mkÃ¼n olabildiÄŸince
gizlemektir ve eriÅŸimini engellemektir. Zaten saklanan kÄ±sÄ±mlarÄ± kullanÄ±cÄ±nÄ±n bilmesine gerek yoktur. 
Ã–rnek vermek istersek televizyonu bir program, kumanda ve tuÅŸ takÄ±mÄ±nÄ± aÃ§Ä±kta (public) ve televizyonun
iÃ§indeki yapÄ±larÄ±nda gizli (private) olarak dÃ¼ÅŸÃ¼nebiliriz.

## Uygulama
```cpp  
using namespace std;

class ExampleEncap {
private: /*Burada yazan kodlar Ã¶zelldir. SÄ±nÄ±f dÄ±ÅŸÄ±ndakiler eriÅŸemez */
    int num;
    char ch;
public: /*bu kÄ±sma yazÄ±lan kodlar kullanÄ±cÄ±dan veri almak iÃ§in kullanÄ±lÄ±r.
*herkes eriÅŸebilir */
    int getNum() const {
        return num;
    }

    char getCh() const {
        return ch;
    }

    void setNum(int num) {
        this->num = num;
    }

    void setCh(char ch) {
        this->ch = ch;
    }
};

int main() {
    ExampleEncap obj;
    obj.setNum(100);
    obj.setCh('A');
    cout << obj.getNum() << endl;
    cout << obj.getCh() << endl;
    return 0;
}
```
>>>>>>> upstream/master
