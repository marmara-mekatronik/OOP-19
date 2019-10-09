

# *Class -Sınıf*



Geometrik anlamda, bir vektör 2 noktadan oluşur; başlangıç ve bitiş. Her bir noktanın kendisine ait x ve y değerleri vardır. Eğer başlangıç ve bitiş olmak üzere iki vektör tanımlarsak toplamda 4 değişkene ihtiyacımız olur. Aşağıda ki örnek kodda iki vektörün tanımı yapılmıştır.

#include **"iostream"**  

**int** main() {  
**double** x1Start = 1.2;  
**double** x1End = 2.0;  
**double** y1Start = 0.4;  
**double** y1End = 1.6;   
**double** x2Start = 1.8;  
**double** x2End = 3.0;  
**double** y2Start = 0.9;  
**double** y2End = 1.1;   
}

Görüldüğü üzere her bir nokta için ayrı ayrı kafa karıştırıcı şekilde tanımlamalar yapılmaktadır. Programcılar bunu kolaylaştırmak için **classları** yarattılar. Şimdi classların ne olduğunu öğrenelim ve aynı vektör tanımlamalarının class versiyonunu görelim.   

## **Classlar**

Sınıflar kısaca kullanıcının tanımladığı veri tipi denebilir. Bu yapının içinde veriler ve fonksiyonlar birlikte bulunabilir. Sınıflar, nesnelerin modeli diğer bir deyişle şablonudur. Programda bir kez sınıf yazılıp şablon oluşturulduktan sonra o sınıftan gerektiği kadar nesne yaratılabilir.
Aşağıdaki kodda  görüldüğü üzere iki adet class yaratılmıştır. İlk Point clasımızda **x** ve **y** noktaları yaratılmış **Vektor** clasımızda ise Pointe bağlı vektörün **start** ve **end** konumları yaratılmıştır. Bu bize şu kolaylığı sağlamaktadır; **Vektor vec1** diyerek **vec1** i yarattığımızda **vec1.start.x** tanımlaması ile kolay bir şekilde vektörümüzün ilk **x** koordinatını tanımlayarak ve aynı şekilde devam ederek vektörümüzün tanımı kolay bir şekilde yapıp yukarıdaki kod karışıklıklığından bizi kurtarmaktadır.

#include **"iostream"**  
**class** Point {  
**public**:  
**double** x, y;  
};  
**class** Vector {  
**public**:  
Point start, end;  
};  
**int** main() {  
Vector vec1;  
vec1.start.x = 3.0;  
vec1.start.y = 4.0;  
vec1.end.x = 5.0;  
vec1.end.y = 6.0;  
Vector vec2;  
vec2.start = vec1.start;  
vec2.start.x = 7.0;
vec2.start.y = 2.0;  
vec2.end.x = 1.0;  
vec2.end.y = 9.0;  
}

Kodumuzdaki tanımlamalarımız aşağıdaki tablolarda örneklenmiştir.

| vec1  |   |   |   |   |
|---|---|---|---|---|
|   start |   | | end  |
| x=3  |  y=4 |   |  x=5 |y=6  |

| vec2  |   |   |   |   |
|---|---|---|---|---|
|   start |   | | end  |
| x=7  |  y=2 |   |  x=1 |y=9 |




**Classlara Erişim tipleri**

Claslarımıza nereden erişilebileceğine dair iki seçeneğimiz var;

 **1. Public**: her yerden erişilebilir.

#include **<iostream>**  
**class** Point {  
**public**:  
**double** x, y;  
Point(**double** nx, **double** ny) {  
x = nx; y = ny;  
}  
};  
**int** main() {  
Point p(2.0,3.0); _//class içinden fonksiyon ile değer atama_  
p.x = 5.0; _// class dışından direk değer atama_  
}

**private**: sadece class içinden erişilebilir.

#include **"iostream"**  
**class** Point {  
**private**:  
**double** x, y;  
**public**:  
Point(**double** nx, **double** ny) {  
x = nx; y = ny;  
};  
**int** main() {  
Point p(2.0,3.0);  
p.x = 5.0;  _// değer atanmaz_  
}

Classlarda public ya da private olarak belirtilmez ise default olarak private atanır.

**class** Point {  
**double** x, y; 
};

**class** Point { 
 **private**: 
 **double** x, y;
};

**Structs** : Structs c dilinden c++ diline taşınmıştır. C++ da classlar ile aynı kabul edilirkler. Tek farkı default olarak public kullanılmasıdır.

**struct** Point { 

**double** x, y; 

};

**struct** Point {  
**public**:

 **double** x, y;
 
};
```
