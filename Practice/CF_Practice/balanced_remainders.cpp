# include <bits/stdc++.h>
using namespace std;

void solve(){
    long s = 0, moves = 0;
    int len, temp;
    cin >> len;
    for(int i = 0; i <= len-1; ++i){
        cin >> temp;
        s += (temp % 3 == 2 ? -1 : temp % 3);
    }
    while(s != 0){
        s < 0 ? s++ : s -= 2;
        moves++;
    }
    cout << moves <<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}