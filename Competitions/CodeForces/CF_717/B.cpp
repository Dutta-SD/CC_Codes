# include <bits/stdc++.h>
using namespace std;
// Lessons - 
// XOR is associative
// READ THE PROBLEM CAREFULLY
// ADJACENT ELEMENTS - SUBARRAY OPERATIONS

void solve(){
    unsigned n, k, x_value {0};
    cin >> n;
    vector <unsigned> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        x_value ^= v[i];
    }

    if(x_value == 0){
        cout << "YES\n";
        return;
    }

    int t{0};
    int count {0};

    for(int i = 0; i < n; ++i){
        t ^= v[i];
        if(t == x_value){
            t = 0;
            ++count;
        }
    }

    if (count >= 2) cout <<"YES\n";
    else cout << "NO\n";   
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}