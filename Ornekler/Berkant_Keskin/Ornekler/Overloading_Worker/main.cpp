#include <iostream>

    using namespace std;

    class Worker{
    private:
        int salary;
        string last_name;
        int age;


    public:
        Worker(int, string, int);
        void showed_feature();
        Worker (int, string);
        Worker(int);

    };

    Worker::Worker(int salar, string las_name, int ag){
        salary=salar;
        last_name=las_name;
        age=ag;

    }
    Worker::Worker(int salar, string las_name){
        salary=salar;
        last_name=las_name;
        age=00000;

    }
    Worker::Worker(int salary ){
        this->salary=salary;
        this->last_name="-unknown-";
        this->age=00000;

    }



    void Worker::showed_feature(){
        cout<<"------------"<<endl;
        cout<< "worker's salary =  "<<salary<<endl;
        cout<< "worker's last name : =  "<<last_name<<endl;
        cout<< "worker's age =  "<<age<<endl;
        cout<<"------------"<<endl;
    }

    int main(){
        Worker worker1(3000,"Keskin",19);
        Worker worker2(2500, "Ozkan");
        Worker worker3(4000);

        worker1.showed_feature();
        worker2.showed_feature();
        worker3.showed_feature();



    }
