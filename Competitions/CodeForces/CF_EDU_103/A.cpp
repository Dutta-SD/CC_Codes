# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k1, k2, w, b;
    cin >> n >> k1 >> k2;
    cin >> w >> b;
    
    int wp, bp;

    wp = min(k1, k2) + (max(k1, k2) - min(k1, k2)) / 2;

    k1 = n - k1;
    k2 = n - k2;

    bp = min(k1, k2) + (max(k1, k2) - min(k1, k2)) / 2;

    if(w <= wp && b <= bp){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}