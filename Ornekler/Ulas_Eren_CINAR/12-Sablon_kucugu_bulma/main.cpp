
#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const& Min (T const& a, T const& b) {
    return a > b ? b:a;
}

int main () {
    int i = 355;
    int j = 95;
    cout << "Min(i, j): " << Min(i, j) << endl;

    double f1 = 1.5;
    double f2 = 28.7;
    cout << "Min(f1, f2): " << Min(f1, f2) << endl;

    string s1 = "Merhaba";
    string s2 = "Dunya";
    cout << "Min(s1, s2): " << Min(s1, s2) << endl;

    return 0;
}