# include <bits/stdc++.h>
using namespace std;
int_fast32_t fren[100000+1];

void solve(){
    memset(fren, 0, 100000+1);
    int_fast32_t n, m, k, temp;
    int_fast32_t maxObtained = INT_MIN;

    cin >> n >> m;
    int_fast32_t max_value = (m +1)/ 2;


    for(int_fast32_t i = 0; i < m; ++i){
        cin >> k;
        set<pair<int_fast32_t, int_fast32_t> > v;
        while(k--){
            cin >> temp;
            v.insert({fren[temp], temp});
        }
        ++fren[v.begin()->second];
    }

    maxObtained = *max_element(fren, fren + 100000+1);

    // cout << maxObtained <<"\n\n";

    if(maxObtained > max_value){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    for(auto i : fren){
        if(i) cout << i <<" ";
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int_fast32_t t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}