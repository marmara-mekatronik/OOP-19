	
#include <iostream>
 
using namespace std;
 
const float PI = 3.14159;

class Silindir
{
   public:
     float r;
     float h;
     float hacim(); // bu durumda fonksiyon inline olmayacak ...
};
 

float Silindir::hacim()
{
       return (PI*r*h);
}
Silindir Silindir1;
 
int main()
{
    Silindir1.r=1.0;
    Silindir1.h=2.0;
    
    
    
    cout << "Hacim=" << Silindir1.hacim() << endl;
return 0;
}
