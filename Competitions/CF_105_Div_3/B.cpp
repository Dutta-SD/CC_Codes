# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, u, r, d, l;
    cin >> n >> u >> r >> d >> l;
    // 0 , n-1
    if (u > 0 && r > 0) {
        --u;
        --r;
    }
    if (r > 0 && d > 0) {
        --r;
        --d;
    }
    if (d > 0 && l > 0) {
        --d;
        --l;
    }
    if (u > 0 && l > 0) {
        --u;
        --l;
    }

    if (u > n-2 || d > n-2 || l > n-2 || r > n-2){
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}