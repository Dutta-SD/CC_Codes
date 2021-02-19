// Binary Exponentiation modulo a number
# include <iostream>
using namespace std;
using ull = unsigned long long;

ull binexp(ull a, ull b, ull m) {
    // Modulo each value will not affect the actual multiplication
    ull res = 1;
    a %= m;  // Modulo
    while(b){
        // If bit is set, multiply; else check next bit
        // position of b
        if(b & 1) res = ((res % m)*(a % m)) % m; // If last bit is set # Changed here
        a =((a%m)*(a % m)) % m; // Square to check last value # Changed here
        b >>= 1; // Shift bit of 2
    }
    return res;
}

int main() {
    ull a, b;
    ull m = 7 + 1e9;
    int n;
    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << binexp(a, b, m) <<"\n";
    }
    return 0;
}