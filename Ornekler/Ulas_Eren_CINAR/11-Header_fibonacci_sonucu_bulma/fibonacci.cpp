#include <iostream>
#include "fibonacci.h"

long fibonacci::fibonacci_Hesap(int n) {
    if (n < 2) return n;
    return fibonacci_Hesap(n - 1) + fibonacci_Hesap(n - 2);
}