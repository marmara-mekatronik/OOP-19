Object

C++ bir çoklu paradigmalı programlama dilidir. Bunun anlamı, farklı programlama şekilllerini desteklemesidir. Nesneye yönelik programlama dili gerçek dünyadaki somut veya soyut bir nesneyi yazılım dünyasına aktarmanın bir yoludur. C++, karmaşık sorunları “object” (nesne) oluşturarak daha küçük kümelere bölmeyi sağlayan nesne yönelimli programlama dili (Object-Oriented Programming)ni destekler. Nesne, bir veri topluluğudur ve bu veriler üzerinde hareket eden işlevlerdir.

C++’da bir nesne oluşturmadan önce bir “class” (sınıf) tanımlamak gerekir. Sınıf, aynı karakteristik özelliklere sahip nesneler grubudur. Aşağıda “Student” isimli sınıf içerisinde herhangi bir öğrenci “nesne”sinin iki özelliği tanımlanmıştır.
```cpp
include "iostream"
using namespace std;                     // Bu fonksiyon aynı isme sahip birden           
                                        //fazla değişken tanımlayabilmek için kullanılır.
          class  Student { 
          public: 
          int ogrencino;    // İnt veri tipinde tanımlanan öğrenci numarası
           string isim;    //  String veri tipinde tanımlanan öğrenci ismi
            }; 
            int main() 
          { 
          Student s1;      // s1 isimli, Student sınıfı için oluşturulan nesne 
          s1.isim = "Cillian";  
  s1.ogrencino =745712389;  
  cout<< "Ogrencinin ismi: "<<s1.isim<<endl;  
  cout<<"Ogrenci numarasi: "<<s1.ogrencino<<endl;
   return 0;  
}
```
Yukarıdaki örnekte tanımlanan “Student” isimli sınıf için “s1” isimli bir nesne tanımlanmıştır.Bu nesnenin iki özelliği daha sonradan ekrana yazılmıştır. Ekran çıktısı aşağıdaki gibi olacaktır:

**Ogrencinin ismi: Cillian**

**Ogrenci numarasi: 745712389**
