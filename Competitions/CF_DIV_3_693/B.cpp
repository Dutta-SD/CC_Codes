# include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, y = 0;
    cin >> n;
    ll x;
    for(ll i = 0; i < n; ++i){
        cin >> x;
        if(x == 2) y++;
    }
    x = n - y;
    ll val = (n - 3*y);
    if(val % 2 != 0){
        cout << "NO\n";
        return;
    }
    val /= 2;
    for(int y_1 = 0; y_1 <= y; ++y_1){
        for(int x_2 = 0; x_2 <= x; ++x_2){
            if(val == (-2*y_1 + x_2)){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
    return;   
}

int main() {
    ll t;
    cin >> t;
    while(t--){
        solve();
    }     
    return 0;
}