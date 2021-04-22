# include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long s {0};

    vector <int> v(n);
    for(auto &i : v){
        cin >> i;
        s += i;
    }

    if (s % 2){
        cout << 0;
        return 0;
    }

    vector < vector <int> > dp (s / 2 + 1, vector<int> (n + 1, 0));

    // There is 1 way you can make a sum of 0 that is by not accepting any element;
    for(int i = 0; i < n; ++i){
        dp[0][i] = 1;
    }

    for(int i = 1; i < s / 2 + 1; ++i){
        for(int j = 1; j <= n; ++j){

            // i - partial sum
            // j - element index
            // Technically this is a boolean array

            dp[i][j] = dp[i][j - 1];
            if (i >= v[j - 1])
                dp[i][j] = max(dp[i][j], dp[i - v[j - 1]][j - 1]);

            cout << dp[i][j] <<"\t";
        }
        cout << endl;
    }

    if (dp[s / 2][n] == 0){
        cout << 0 << "\n";
        return 0;
    }

    cout << 1 <<"\n";

    int minZeroIdx = 0;
    int numTrailZeros = __builtin_ctz(v[0]);

    for(int i = 1; i < n; ++i){
        if(__builtin_ctz(v[i]) < numTrailZeros) minZeroIdx = i;
    }

    cout << minZeroIdx + 1 <<"\n";

    return 0;
}