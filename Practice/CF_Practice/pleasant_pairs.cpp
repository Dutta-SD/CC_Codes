# include <bits/stdc++.h>
using ll = long long unsigned;
using namespace std;

void solve(){
    ll n;
    cin >> n;

    ll l = 2*n - 2;
    ll arr[n];

    ll count = 0;

    for(ll i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(ll i = 0; i < n; ++i){
        for(ll j = i; j < l - i; ++j){
            // cout << "\nCurrent Index Pairs : " << i << "  " << j;
            if(arr[i] * arr[j] == (i+1)+(j+1)) count ++;
        }
    }
    // cout << "\nFinished";

    cout << count <<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}