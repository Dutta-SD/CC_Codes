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

    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        for(int j = 0; j < n; ++j){
            grid[i][j] = s[j];
        }
    }

    /* INPUT ENDS*/   

    // Bottom up dp approach

    vector < vector<int> > numWays (n , vector <int> (n, 0));

    numWays[0][0] = 1;

    if(grid[0][0] == '*'){
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(grid[i][j] == '.'){
                if(i > 0){
                    // has top way
                    (numWays[i][j] += numWays[i-1][j]) %= MOD;
                }
                if(j > 0){
                    (numWays[i][j] += numWays[i][j-1]) %= MOD;
                }
            }            
        }
    }

    cout << numWays[n-1][n-1];
    return 0;    
}