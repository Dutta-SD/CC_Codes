# include <bits/stdc++.h>
using namespace std;

void solve(){
    // freopen("output.txt", "w+", stdout);
    string s;
    for(int i = 0; i < 9; ++i){
        cin >> s;
        for(char &i : s){
            if(i == '1') i = '2';
        }
        cout << s << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}