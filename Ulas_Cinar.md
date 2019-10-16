

# *Class -Sınıf*



Sınıflar konusuna geçmeden önce sınıfların farkını anlamak üzere vektörler üzerinden bir örnek yapalım. Geometrik anlamda, bir vektör 2 noktadan oluşur; başlangıç ve bitiş. Her bir noktanın kendisine ait x ve y değerleri vardır. Eğer başlangıç ve bitiş olmak üzere iki vektör tanımlarsak toplamda 4 değişkene ihtiyacımız olur. Aşağıda ki örnek kodda iki vektörün tanımı yapılmıştır.
```cpp
#include "iostream" 

int main() {  
double x1Bas = 1.2;  
double x1Son = 2.0;  
double y1Bas = 0.4;  
double y1Son = 1.6;   
double x2Bas = 1.8;  
double x2Son = 3.0;  
double y2Bas = 0.9;  
double y2Son = 1.1;   
}
```
Görüldüğü üzere her bir nokta için ayrı ayrı kafa karıştırıcı şekilde tanımlamalar yapılmaktadır. Programcılar bunu kolaylaştırmak için **classları** yarattılar. Şimdi classların ne olduğunu öğrenelim ve aynı vektör tanımlamalarının class versiyonunu görelim.   

## **Classlar**

Sınıflar kısaca kullanıcının tanımladığı veri tipi denebilir. Bu yapının içinde veriler ve fonksiyonlar birlikte bulunabilir. Sınıflar, nesnelerin modeli diğer bir deyişle şablonudur. Programda bir kez sınıf yazılıp şablon oluşturulduktan sonra o sınıftan gerektiği kadar nesne yaratılabilir.
Aşağıdaki kodda  görüldüğü üzere iki adet class yaratılmıştır. İlk Point clasımızda **x** ve **y** noktaları yaratılmış **Vektor** clasımızda ise Pointe bağlı vektörün **baslangic** ve **son** konumları yaratılmıştır. Bu bize şu kolaylığı sağlamaktadır; **Vektor vek1** diyerek **vek1** i yarattığımızda **vek1.baslangic.x** tanımlaması ile kolay bir şekilde vektörümüzün ilk **x** koordinatını tanımlayarak ve aynı şekilde devam ederek vektörümüzün tanımı kolay bir şekilde yapıp yukarıdaki kod karışıklıklığından bizi kurtarmaktadır.
```cpp
#include "iostream"  
class Nokta {  
public:  
double x, y;  
};  
class Vektor {  
public:  
Nokta baslangic, son;  
};  
int main() {  
Vektor vek1;  
vek1.baslangic.x = 3.0;  
vek1.baslangic.y = 4.0;  
vek1.son.x = 5.0;  
vek1.son.y = 6.0;  
Vektor vek2;   
vek2.baslangic.x = 7.0;
vek2.baslangic.y = 2.0;  
vek2.son.x = 1.0;  
vek2.son.y = 9.0;  
}
```
Kodumuzdaki tanımlamalarımız aşağıdaki tablolarda örneklenmiştir.

| vek1  |   |   |   |   |
|---|---|---|---|---|
| baslangic |   | | son  |
| x=3  |  y=4 |   |  x=5 |y=6  |

| vek2  |   |   |   |   |
|---|---|---|---|---|
| baslangic |   | | son  |
| x=7  |  y=2 |   |  x=1 |y=9 |




**Classlara Erişim tipleri**

Claslarımıza nereden erişilebileceğine dair iki seçeneğimiz var;

 **1. Public**: her yerden erişilebilir.
```cpp
#include "iostream"  
class Nokta {  
 public:  
  double x, y;  
  Nokta(double nx, double ny) {  
   x = nx;
   y = ny;  
}  
};  
int main() {  
 Nokta n(2.0,3.0); _//class içinden fonksiyon ile değer atama_  
 n.x = 5.0; _// class dışından direk değer atama_  
}
```
**2. Private**: sadece class içinden erişilebilir.
```cpp
#include "iostream" 
 class Nokta {  
  private:  
   double x, y;  
  public:  
   Nokta(double nx, double ny) {  
    x = nx;
    y = ny;
}
};  
int main() {  
 Nokta n(2.0,3.0);   //x private olarak tanımlandığından classın içinden değer atanabilir._
 n.x = 5.0;  // değer atanamaz çünkü x private olarak tanımlanmıştır._  
}
```
Classlarda public ya da private olarak belirtilmez ise default olarak private atanır. Aşağıdaki iki kod aynı işlevi görmektedir.
```cpp
class Nokta {  
 double x, y; 
};

class Nokta { 
 private: 
  double x, y;
};
```
**Structs** : Structs c dilinden c++ diline taşınmıştır. C++ da classlar ile aynı kabul edilirkler. Tek farkı default olarak public kullanılmasıdır. Aşağıdaki iki kod aynı işlevi görmektedir.
```cpp
struct Nokta { 
 double x, y; 
};

struct Nokta {  
 public:
  double x, y;
};
```
```
