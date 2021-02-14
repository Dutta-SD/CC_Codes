# include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    ll MOD = 1e9 + 7;
    cin >> n;
    ll ans = 1;
    for(ll i = 1; i <= n; ++i){
        ans = (ans * 2) % MOD;
    }
    cout << ans;
    return 0;
}