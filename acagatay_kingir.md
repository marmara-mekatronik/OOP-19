
# Kaps�lleme (Encapsulation):

Kaps�lleme bir programda ki baz� �zelliklerin veya i�levlerin di�er kullan�c�lardan saklamas�d�r. 
Yani bir s�n�f da (class) bulunan �zelliklerin (properties) ve metotlar�n (methods) m�mk�n olabildi�ince
gizlemektir ve eri�imini engellemektir. Zaten saklanan k�s�mlar� kullan�c�n�n bilmesine gerek yoktur. 
�rnek vermek istersek televizyonu bir program, kumanda ve tu� tak�m�n� a��kta (public) ve televizyonun
i�indeki yap�lar�nda gizli (private) olarak d���nebiliriz.

## Uygulama

  

using namespace std;  
class ExampleEncap{  
private: /*Burada yazan kodlar �zelldir.   S�n�f d���ndakiler eri�emez */  
int num;  
char ch;  
public: /*bu k�sma yaz�lan kodlar kullan�c�dan veri almak i�in kullan�l�r.  
*herkes eri�ebilir */  
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