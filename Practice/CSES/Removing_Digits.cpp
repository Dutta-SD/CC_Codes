# include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, INT_MAX);

    dp[0] = 0;
    for(int i = 1; i <= n; ++i){
        for(auto c : to_string(i)){
            dp[i] = min(dp[i], dp[i - (c - '0')] + 1);
            // + 1 as one additional removal required
        }
    }

    cout << dp[n];
    return 0;
}