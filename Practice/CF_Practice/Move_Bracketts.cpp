# include <bits/stdc++.h>
using namespace std;

void solve(){
    int ans{0}, brBalance{0}, n;
    string s;

    cin >> n;
    cin >> s;
    for(int i = 0; i < n; ++i){
        // Prefix balance = sum('(') in prefix + sum(')') in prefix
        if(s[i] == '(') ++brBalance;
        else {
            --brBalance;
            if(brBalance < 0){
                brBalance = 0;
                ++ans;
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}