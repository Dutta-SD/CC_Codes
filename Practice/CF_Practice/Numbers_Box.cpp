# include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, m, t;
    cin >> n >> m;
    ll sum = 0;
    ll x = 0;
    ll min_num = INT_MAX;
    for (ll i = 0 ;i < n; ++i){
        for (ll j = 0; j < m; ++j){
            cin >> t;
            if(t < 0) ++x;
            sum += abs(t);
            if(abs(t) < abs(min_num)){
                min_num = abs(t);
            }
        }
    }
    // cout << "\t" << min_num <<"\n";

    if (x % 2 == 0){
        // remove all - signs
        cout << sum <<"\n";
    } else {
        cout << sum - 2*min_num<<"\n";
    }
}

int main () {
    ll cases;
    cin >> cases;
    while(cases--){
        solve();
    }    
    return 0;   
}