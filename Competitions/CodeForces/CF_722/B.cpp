//https://codeforces.com/contest/1529/problem/B

# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector <long> v(n);
    long ans = 0;
    long minPos = LONG_MAX;

    for(auto &i : v){
        cin >> i;
        if(i <= 0){
            ++ans;
        } else {
            minPos = min(minPos, i);
        }
    }

    // SORT
    sort(v.begin(), v.end());
    long minDist = LONG_MAX;

    // Find min Pair distance
    for(int i = 1; i < n; ++i){
        if(v[i] <= 0) minDist = min(minDist, v[i] - v[i - 1]);
    }

    if(minPos == LONG_MAX){
        cout << ans <<"\n";
        return;
    }

    cout << ans + (minDist >= minPos) <<"\n";
}
int main(){
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}