# include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector <int> v(n);
    vector <int> dp(n, 0);

    for(auto &i : v){
        cin >> i;
    }

    dp[n-1] = 1;
    set <int> uniq;
    uniq.insert(v[n-1]);

    for(int i = n-2; i > -1; --i){
        int num_uniq = dp[i+1];
        if(uniq.find(v[i]) == uniq.end()){
            ++num_uniq;
            uniq.insert(v[i]);
        }
        dp[i] = num_uniq;
    }

    for(int i = 0; i < m; ++i){
        int l;
        cin >> l;
        cout << dp[l-1] <<"\n";
    }
    return 0;
}