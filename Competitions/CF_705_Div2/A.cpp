# include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector <int> v;
    for(int i = (int)ceil(k / 2.0); i <= n; ++i){
        if(i != k){
            v.emplace_back(i);
        }
    }

    cout << v.size() << "\n";
    for(auto i : v){
        cout << i <<" ";
    }
    cout << "\n";
}

int main(){
    long t = 1;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}