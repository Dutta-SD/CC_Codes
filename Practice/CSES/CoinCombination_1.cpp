# include <bits/stdc++.h>
# define MOD (1000000000 + 7)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, value;
    cin >> n >> value;
    // cin >> value;
   
    vector <ll> coins (n);

    for(auto &i: coins) {
        cin >> i;
    }
    // Bottom up dp
    vector <ll> numCoins (value + 1, 0);
    ll nCoins;

    numCoins[0] = 1;

    for(ll j = 1; j < value+1; ++j){
        nCoins = 0;
        for(ll i = 0; i < n; ++i){
            if (j >= coins[i]){
                (nCoins += numCoins[j - coins[i]]) %= MOD;
            }
        }
        numCoins[j] = nCoins;
    }

    ll a = numCoins[value];
    cout << a % MOD;
    return 0;
}