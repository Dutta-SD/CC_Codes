// Modular Inverse using Extended Euclid Algorithm
// Exists only when gcd(a, m) = 1
# include <bits/stdc++.h>
using namespace std;

int extendedEuclid(int a, int b, int& x, int& y){
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int d = extendedEuclid(b, a%b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

void modularInverse(int a, int m){
    // Computes a^-1 mod(m)
    int x, y;
    int d = extendedEuclid(a, m, x, y);

    if(d != 1){
        cout << "Not Exist\n";
    }
    else {
        cout << (x < 0 ? x + m : x) << "\n";
    }
}

int main() {
    int a = 10, m = 21;
    modularInverse(a, m);
    return 0;
}