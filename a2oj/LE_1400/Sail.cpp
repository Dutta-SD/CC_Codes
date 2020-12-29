# include <bits/stdc++.h>
using namespace std;
void solve();

int main(){
    int t;
    cin >> t;
    solve();
    return 0;
}

void solve(){
    int sx, sy, ex, ey;
    string winds;
    cin >> sx >> sy >> ex >>ey;
    // cout << sx << sy << ex <<ey;
    int x = sx, y = sy;
    int num_moves = 0;
    cin >> winds;

    for(auto i : winds){
        if(x == ex && y == ey) break;

        if (i == 'N'){
            if(abs(ey - (y + 1)) < abs(ey - y)){
                x = x;
                y += 1;
            }
        }
        if(i == 'S') {
            if(abs(ey - (y-1)) < abs(ey - y)){
                x = x;
                y -= 1;
            }
        }
        if (i == 'E'){
            if(abs(ex - (x + 1)) < abs(ex - x)){
                y = y;
                x += 1;
            }
        }
        if(i == 'W'){
            if(abs(ex - (x -1)) < abs(ex - x)){
                y = y;
                x -= 1;
            }
        }
        num_moves++;
    }
    cout << (x == ex && y == ey ? num_moves : -1) <<"\n";
}