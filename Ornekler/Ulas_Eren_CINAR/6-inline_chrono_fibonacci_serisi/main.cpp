#include <iostream>
#include <ctime>
#include <chrono>

long fibonacci(unsigned n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

inline long fibonacci_inline(unsigned n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

    // ilk kısım normal fonksiyonun suresinin olculmesi

    std::chrono::time_point<std::chrono::system_clock> d_1basla, d_1son;
    d_1basla = std::chrono::system_clock::now();

    fibonacci(42);

    d_1son = std::chrono::system_clock::now();
    std::chrono::duration<double> gecen_1zaman = d_1son - d_1basla;
    std::time_t baslangic1_zamani = std::chrono::system_clock::to_time_t(d_1basla);
    std::time_t bitis1_zamani = std::chrono::system_clock::to_time_t(d_1son);

    std::cout << "Normal fonksiyon ile gecen sure : " << gecen_1zaman.count() << " saniye" << std::endl;

    //ikinci kısım inline fonksiyonunun suresini olcme

    std::chrono::time_point<std::chrono::system_clock> d_2basla, d_2son;
    d_2basla = std::chrono::system_clock::now();

    fibonacci_inline(42);

    d_2son = std::chrono::system_clock::now();
    std::chrono::duration<double> gecen_2zaman = d_2son - d_2basla;
    std::time_t baslangic_2zamani = std::chrono::system_clock::to_time_t(d_2basla);
    std::time_t bitis_2zamani = std::chrono::system_clock::to_time_t(d_2son);

    std::cout << "Inline fonksiyonu ile gecen sure : " << gecen_2zaman.count() << " saniye" << std::endl;

    return 0;
}