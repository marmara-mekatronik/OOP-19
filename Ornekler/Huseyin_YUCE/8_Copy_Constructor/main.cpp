<<<<<<< HEAD
#include <iostream>

class Nokta {
public:
    Nokta(int x1, int y1);
    Nokta(const Nokta &p2);
    int getX();
    int getY();

private:
    int x, y;

};

Nokta::Nokta(int x1, int y1) {
    x=x1;
    y=y1;
}

Nokta::Nokta(const Nokta &p2) {
    x=p2.x;
    y=p2.y;
}

int Nokta::getX() {
    return x;
}

int Nokta::getY() {
    return y;
}

int main() {
    Nokta Nokta1(10,20);
    Nokta Nokta2(Nokta1);
    std::cout << "Nokta1.x = " << Nokta1.getX()<< std::endl;
    std::cout << "Nokta2.x = " << Nokta2.getY()<< std::endl;

    return 0;
=======
#include <iostream>

class Nokta {
public:
    Nokta(int x1, int y1);
    Nokta(const Nokta &p2);
    int getX();
    int getY();

private:
    int x, y;

};

Nokta::Nokta(int x1, int y1) {
    x=x1;
    y=y1;
}

Nokta::Nokta(const Nokta &p2) {
    x=p2.x;
    y=p2.y;
}

int Nokta::getX() {
    return x;
}

int Nokta::getY() {
    return y;
}

int main() {
    Nokta Nokta1(10,20);
    Nokta Nokta2(Nokta1);
    std::cout << "Nokta1.x = " << Nokta1.getX()<< std::endl;
    std::cout << "Nokta2.x = " << Nokta2.getY()<< std::endl;

    return 0;
>>>>>>> upstream/master
}