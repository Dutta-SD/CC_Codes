# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for(auto &i : v) cin >> i;
    int i = 0;

    while(i < n -1){
        if(v[i] > 0 && k) {
            --v[i];
            ++v[n-1];
            --k;
            if(k == 0) break;            
        }
        else {
            ++i;
        }
    }

    for(auto &i : v) cout << i << " ";
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}