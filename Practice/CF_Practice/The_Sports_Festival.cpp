# include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dp[n][n];

    memset(dp, 0, sizeof(dp));

    int v[n];

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    sort(v, v + n);

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n-i; ++j){

            if (i == j) dp[i][j] = 0;

            else dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + v[j] - v[i];
        }
    }

    cout << (dp[0][n-1] == -1 ? 0 : dp[0][n-1]);
    return 0;
}