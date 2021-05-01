# include <bits/stdc++.h>
using namespace std;


void solve(){
    long n, m, k;
    cin >> n >> m >> k;
    vector < vector < set<long> >  > v (n + 1, vector <set <long> > (m + 1));

    for(long i = 1; i <= n; ++i){
        for(long j = 1; j <= m; ++j){
            if(i == 1 && j == 1) {
                v[i][j].insert(0);
                continue;
            }

            set <long> s1 {v[i -1][j]};
            set <long> s2 {v[i][j-1]};

            if(i > 1) for(auto x : s1) v[i][j].insert(x + j);
            if(j > 1) for(auto x : s2) v[i][j].insert(x + i);
        }
    }

    if(v[n][m].find(k) != v[n][m].end()) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}