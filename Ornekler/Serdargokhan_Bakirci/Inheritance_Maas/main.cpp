#include <iostream>

using namespace std;

class isci {
protected:
    int maas;
};


class muhasebe: public isci {
public:
    int bonus;
    void setMaas(int s) {
        maas = s;
    }
    int getMaas() {
        return maas;
    }
};

int main() {
    muhasebe maas1;
    maas1.setMaas(50000);
    maas1.bonus = 5000;
    cout << "Maas: " << maas1.getMaas() << "\n";
    cout << "Bonus: " << maas1.bonus << "\n";
    return 0;
}