# include <bits/stdc++.h>
using namespace std;

bool isValid(int x, int y, int n, int m, int _d_x, int _d_y){
    if((x + _d_x >= 0) &&( x + _d_x < n) && (y + _d_y >= 0) && (y + _d_y < m)) return true;
    return false;
}

int main(){
    int n, m;
    char p; 
    cin >> n >> m >> p;
    vector <vector <char> > v (n, vector <char> (m));
    vector < pair<int, int> > moves {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    set<char> s;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(v[i][j] == p){
                for(auto val : moves){
                    if (isValid(i, j, n, m, val.first, val.second) && v[i + val.first][j + val.second] != '.'){
                        s.insert(v[i + val.first][j + val.second]);
                    }
                }
            }
        }
    }

    cout << (s.find(p) == s.end() ? s.size() : s.size() - 1);
    // for(auto i : s){
    //     cout << i << "\n";
    // }
    return 0;
}