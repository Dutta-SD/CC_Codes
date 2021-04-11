# include <bits/stdc++.h>
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
    ll minCoins;

    for(ll j = 1; j < value+1; ++j){
        minCoins = INT_MAX;
        for(ll i = 0; i < n; ++i){
            if (j >= coins[i]){
                minCoins = min(minCoins, 1 + numCoins[j - coins[i]]);
            }
        }
        numCoins[j] = minCoins;
    }

    ll a = numCoins[value];
    cout << (a == INT_MAX ? -1 : a);
    return 0;
}