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
    int n;
    cin >> n;  
    vector < vector<char> > grid (n, vector <char> (n, 0));

    for(auto &i: grid) {
        for(auto &j : i){
            cin >> j;
        }
    }

    // Bottom up dp approach

    vector < vector<int> > numWays (n , vector <int> (n, 0));

    numWays[0][0] = 1;

    for (int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(grid[i][j] == '.'){
                if(grid[i-1][j] == '.') grid[i][j] += 
            }

        }
    }

    cout << numCombinations[n][value];
    return 0;    
}