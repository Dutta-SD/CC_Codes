# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector <int> v;
    vector <int> odd;
    vector <int> even;
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        if (temp % 2 == 0) even.push_back(temp);
        else odd.push_back(temp);
    }

    for(auto i  :odd){
        cout << i <<" ";
    }
    for(auto i : even) {
        cout << i << " ";
    }
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
