// Binary Exponentiation modulo a number
# include <iostream>
using namespace std;

long long binexp(long long a, long long b, long long m) {
    // Modulo each value will not affect the actual multiplication
    long long res = 1;
    a %= m;  // Modulo
    while(b){
        // If bit is set, multiply; else check next bit
        // position of b
        if(b & 1) res *= a % m; // If last bit is set # Changed here
        a *= a % m; // Square to check last value # Changed here
        b >>= 1; // Shift bit of 2
    }
    return res;
}

int main() {
    cout << binexp(7, 8, 12) << endl;
    return 0;
}