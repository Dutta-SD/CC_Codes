# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector <int> dp (n + 1, 0);    

    for(int i = 1; i <= n; ++i){
        dp[i] = -1;
        if(i >= a) dp[i] = max(dp[i], 1 + (dp[i - a] != -1 ? dp[i - a] : -2));
        if(i >= b) dp[i] = max(dp[i], 1 + (dp[i - b] != -1 ? dp[i - b] : -2));
        if(i >= c) dp[i] = max(dp[i], 1 + (dp[i - c] != -1 ? dp[i - c] : -2));
    }

    cout << dp[n];   
    return 0;
}