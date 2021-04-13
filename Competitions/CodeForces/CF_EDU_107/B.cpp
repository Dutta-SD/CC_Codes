# include <bits/stdc++.h>
// # define DEBUG 1
using namespace std;
using ll = long long;

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

void solve(){
    ll a, b, c;
    cin >> a >> b >> c;

    if(a > b){
        cout << binexp(10, a - 1) << " " << binexp(10, b - 1) + binexp(10, c-1) << "\n";
    } else {
        cout << binexp(10, a - 1) + binexp(10, c-1) << " " << binexp(10, b - 1)<< "\n";
    }         
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}