# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int v[n];
    long u[n] {0};
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    partial_sum(v, v + n, u);

    int k;
    cin >> k;
    while(k--){
        int q;
        cin >> q;
        auto it = lower_bound(u, u + n, q);
        it;
        cout << it - u  + 1 <<"\n";
    }
}

int main(){
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}