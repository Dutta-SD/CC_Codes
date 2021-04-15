# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
# define DEBUG 1

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ---------------------------------------
    int n;
    cin >> n;
    vector <long> v(n);
    for(auto &i : v){
        cin >> i;
    }
    sort(v.begin(), v.end());

    long cost = 0;
    long median = v[n/2];
    
    for(auto i : v){
        cost += (abs(i - median));
    }

    cout << cost;    
    return 0;    
}