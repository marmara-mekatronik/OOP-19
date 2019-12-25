#include <iostream>
using namespace std;

template <class T>
class benimSinifim{
public:
    T data;
    benimSinifim(T data): data(data){}
};


int main() {
    benimSinifim<int>  b(10);
    cout<< b.data << endl;
    benimSinifim<char> c('A');
    cout<< c.data << endl;
    return 0;
}