# include <iostream>
# include <cmath>
# include <bitset>
# include <string>
# define print(v, n) {for(auto f = n; f < 16; ++f){cout << v.at(f);} cout << "\n";}
using namespace std;
using ll = unsigned long long;

ll g(ll n){
    return n ^ (n >> 1);
}

int main() {
    int n;
    cin >> n;
    ll lim = (ll)pow(2, n);
    for(ll i = 0; i < lim; ++i){
        print((bitset<16> (g(i))).to_string(), 16-n);
    }
    return 0;    
}