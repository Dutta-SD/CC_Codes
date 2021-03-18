# include <bits/stdc++.h>
using namespace std;

int grid[1001][1001];
bool vis[1001][1001];
int n, m;

bool isValid(int i, int j){
    if(i  > n || i < 1 || j > m || j < 1) return false;
    if(vis[i][j] == true || grid[i][j] == 0) return false;
    return true;
}

// 0 means wall, 1 means path

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int i, int j){
    vis[i][j] = true;

    for(int t = 0; t < 4; ++t){
        if(isValid(i+dx[t], j+dy[t])) dfs(i+dx[t], j+dy[t]);
    }
}

int main(){
    cin >> n >> m;
    string temp;

    for(int i = 1; i <= n; ++i){
        cin >> temp;
        for(int j = 0; j < m; ++j){
            if(temp[j] == '#') grid[i][j+1] = 0;
            else grid[i][j+1] = 1;
        }
    }

    // CC in Grid
    int cnt = 0;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(grid[i][j] == 1 && vis[i][j] == false){
                cnt++;
                dfs(i, j);
            }
        }
    }

    cout << cnt;
    return 0;
}