# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
using namespace std;

void solve(){

    long long l, r;
    cin >> l >> r;
    long long low, high;

    low = l + (9 - l % 10);
    high = r % 10 != 9 ? r + (9 - l % 10) - 10 : r; 

    cout << (r - l  +1) * ((high - low) / 10 + 1) << "\n";
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}