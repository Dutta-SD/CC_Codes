# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
using namespace std;

void solve(){
    int n, temp;
    string s;
    cin >> n;
    cin >> s;
    vector <int> t_positions;
    vector <int> m_positions;
    for(int i = 0; i < n; ++i){
        if(s[i] == 'M') m_positions.emplace_back(i);
        else t_positions.emplace_back(i);
    }

    // cout <<"\t" << m_positions.size()  << " " << t_positions.size() <<"\n";

    int k = n / 3;
    for(int i = 0; i < k; ++i){
        if(!(m_positions.size() == k && t_positions.size() == 2*k && (m_positions[i] > t_positions[i] && m_positions[i] < t_positions[k + i]))){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}