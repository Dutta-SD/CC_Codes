# include <bits/stdc++.h>
using namespace std;

void solve(){
    int r, b;
    cin >> r >> b;

    vector <int> runs(b, 0);
    vector <long> s(b, 0);

    for(auto &i : runs) {cin >> i;}


    for(int i = 0; i < b; ++i){
        r -= runs[i];
        // cout << "RUNS : "  << r << "\n";       

        if(r != 1 && r > 6 * (b - i - 1)){
            // No runs
            cout << "B " << i + 1 <<"\n";
            return;
        } 
        if (r <= 0){
            // A has won
            cout << "A " << i + 1 << "\n";
            return;
        }       
    }
    // cout << "RUNS FINAL : " << r <<"\n";

    if(r == 1){
        cout << "T " << b <<"\n";
    } else cout << "B " << b << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}