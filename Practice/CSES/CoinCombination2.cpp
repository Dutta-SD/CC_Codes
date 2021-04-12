# include <bits/stdc++.h>
# define MOD (1000000000 + 7)
using namespace std;

void fastio(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    fastio();
    int n, value, left;
    cin >> n >> value;   
    vector <int> coins (n);

    for(auto &i: coins) {
        cin >> i;
    }

    // Bottom up dp approach
    // numCombinations[i][x] === number of ways of getting x with first i coins

    vector < vector<int> > numCombinations (n+1 , vector <int> (value + 1, 0));

    numCombinations[0][0] = 1;

    for (int i = 1; i <= n; ++i){
        for(int j = 0; j <= value; ++j){
            numCombinations[i][j] = numCombinations[i - 1][j];
            left = j - coins[i - 1];
            if(left >= 0){
                (numCombinations[i][j] += numCombinations[i][left]) %= MOD;
            }
        }
    }

    cout << numCombinations[n][value];
    return 0;    
}