#include <iostream>

using namespace std;

class Kapsulleme {
private:
    int x;
public:
    void set(int a){
        x=a;
    }
    int get(){
        return x;
    }
};

int main(){
    Kapsulleme kapsul;
    kapsul.set(5);
    cout<<kapsul.get();
    return 0;
}