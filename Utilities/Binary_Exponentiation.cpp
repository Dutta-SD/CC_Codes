// Binary Exponentiation
# include <iostream>
using namespace std;

long long binexp(long long a, long long b) {
    long long res = 1;
    while(b){
        // If bit is set, multiply; else check next bit
        // position of b
        if(b & 1) res *= a; // If last bit is set
        a *= a; // Square to check last value
        b >>= 1; // Shift bit of 2
    }
    return res;
}

int main() {
    cout << binexp(7, 8) << endl;
    return 0;
}