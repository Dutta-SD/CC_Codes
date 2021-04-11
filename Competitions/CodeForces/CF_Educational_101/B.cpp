// Red and Blue
# include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n;
    vector<int> r(n);
    for(auto &i : r) cin >> i;
    cin >> m;
    vector <int> b(m);
    for(auto &i : b) cin >> i;
    // Ans is max of partial sums
    // of r and b array
    partial_sum(r.begin(), r.end(), r.begin());
    // Store in same array
    partial_sum(b.begin(), b.end(), b.begin());

    cout << max(0, *max_element(r.begin(), r.end()) ) + max(0, *max_element(b.begin(), b.end()) ) << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}