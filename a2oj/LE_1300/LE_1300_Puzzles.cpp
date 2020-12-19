# include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector <int> puzzles (m, 0);
    for(int i = 0; i < m; ++i){
        cin >> puzzles[i];
    }
    sort(puzzles.begin(), puzzles.end());
    int best = INT_MAX;

    for(int i = 0; i < m-n-1; ++i){
        best = min(best, puzzles[i+n-1] - puzzles[i]);
    }

    cout << best;
    return 0;
}