#include <iostream>
using namespace std;

template <class A>
class sinif {
public:
    A data;

    sinif(A data) : data(data) {}
};

int main(){
    sinif<string> x("Dogum tarihi:");
    cout<<x.data<<endl;

    sinif<int> d(1998);
    cout<<d.data<<endl;

    return 0;
}