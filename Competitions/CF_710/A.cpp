# include <bits/stdc++.h>
using namespace std;
using ll  = long long;

void solve(){
    ll n, m, x, i, j;
    cin >> n >> m >> x;
    --x;
    i = x % n;
    j = x / n;

    cout << i*m + j + 1 <<"\n";
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
    
}

