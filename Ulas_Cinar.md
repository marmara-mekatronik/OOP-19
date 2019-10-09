***

# *Class*

***

Geometri bağlamında, bir vektör 2 noktadan oluşur: başlangıç ve bitiş. Her bir noktanın kendisine ait x ve y değerleri vardır. Eğer başlangıç ve bitiş olmak üzere iki vektör tanımlarsak toplamda 4 değişkene ihtiyacımız olur.

#include **<iostream>**  
**void** offsetVector(**double** &x0, **double** &x1, **double** &y0, **double** &y1,  
**double** offsetX, **double** offsetY) {  
x0 += offsetX;  
x1 += offsetX;  
y0 += offsetY;  
y1 += offsetY;  
}  
**void** printVector(**double** x0, **double** x1, **double** y0, **double** y1) {  
std::cout << **"("** << x0 << **","** << y0 << **") -> ("**  
<< x1 << **","** << y1 << **")"** ;  
}  
**int** main() {  
**double** xStart = 1.2;  
**double** xEnd = 2.0;  
**double** yStart = 0.4;  
**double** yEnd = 1.6;  
offsetVector(xStart, xEnd, yStart, yEnd, 1.0, 1.5);  
printVector(xStart, xEnd, yStart, yEnd);  
_// (2.2,1.9) -> (3.8,4.3)_  
}

## **Classlar**

Sınıflar kısaca kullanıcının tanımladığı veri tipi denebilir. Bu yapının içinde veriler ve fonksiyonlar birlikte bulunabilir. Sınıflar, nesnelerin modeli diğer bir deyişle şablonudur. Programda bir kez sınıf yazılıp şablon oluşturulduktan sonra o sınıftan gerektiği kadar nesne yaratılabilir.

#include **<iostream>**  
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

**Erişim tipleri**

Claslarımıza nereden erişilebileceğine dair iki seçeneğimiz var;

**public**: her yerden erişilebilir.

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

#include **<iostream>**  
**class** Point {  
**private**:  
**double** x, y;  
**public**:  
Point(**double** nx, **double** ny) {  
x = nx; y = ny;  
}  
};  
**int** main() {  
Point p(2.0,3.0);  
p.x = 5.0; _// değer atanmaz_  
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
