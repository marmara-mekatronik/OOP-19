
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