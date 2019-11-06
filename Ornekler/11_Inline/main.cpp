#include <iostream>
#include <ctime>
#include <chrono>

int fonk(int a, int b);

inline int fonk_inline(int a, int b);

int fonk(int a, int b) {
    return (a + b) * (a + b);
}

inline int fonk_inline(int a, int b) {
    return (a + b) * (a + b);
}

#define HESAPLA(x, y) ((x)+(y)) * ((x)+(y))


int main() {

    std::chrono::time_point<std::chrono::system_clock> d_basla, d_son;
    d_basla = std::chrono::system_clock::now();

    for (int a = 0; a < 90000; ++a) {
        for (int b = 0; b < 90000; ++b) {
            // fonk(a,b);
            // fonk_inline(a,b);
            HESAPLA(a, b);
        }
    }

    d_son = std::chrono::system_clock::now();

    std::chrono::duration<double> gecen_zaman = d_son - d_basla;
    std::time_t baslangic_zamani = std::chrono::system_clock::to_time_t(d_basla);
    std::time_t bitis_zamani = std::chrono::system_clock::to_time_t(d_son);

    std::cout << "Bitiş anı : " << std::ctime(&baslangic_zamani) << std::endl;
    std::cout << "Bitiş anı : " << std::ctime(&bitis_zamani) << std::endl;
    std::cout << "Geçen Süre : " << gecen_zaman.count() << " saniye" << std::endl;

    return 0;
}