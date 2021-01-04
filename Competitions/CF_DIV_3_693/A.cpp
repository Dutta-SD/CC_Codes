# include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll w, h, n;
    cin >> w >> h >> n;
    ll a = w, b = h;
    while(a % 2 == 0){
        a /= 2;
    }
    while (b % 2 == 0){
        b /= 2;
    }
    ll times = (w / a) * (h / b);    
    // cout << " \t\t\t" << times <<"\n";

    if(times >= n){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }    
    return 0;
}