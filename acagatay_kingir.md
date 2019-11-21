
# Kapsülleme (Encapsulation):

Kapsülleme bir programda ki bazı özelliklerin veya işlevlerin diğer kullanıcılardan saklamasıdır. 
Yani bir sınıf da (class) bulunan özelliklerin (properties) ve metotların (methods) mümkün olabildiğince
gizlemektir ve erişimini engellemektir. Zaten saklanan kısımları kullanıcının bilmesine gerek yoktur. 
Örnek vermek istersek televizyonu bir program, kumanda ve tuş takımını açıkta (public) ve televizyonun
içindeki yapılarında gizli (private) olarak düşünebiliriz.

## Uygulama
```cpp  
using namespace std;

class ExampleEncap {
private: /*Burada yazan kodlar özelldir. Sınıf dışındakiler erişemez */
    int num;
    char ch;
public: /*bu kısma yazılan kodlar kullanıcıdan veri almak için kullanılır.
*herkes erişebilir */
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
