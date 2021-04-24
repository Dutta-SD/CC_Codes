# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    string s(n, 'a');

    for(int i = n - 2; i >= 0; --i){
        // n - i - 1 goes 1, 2, 3, ...
        if(k <= n - i - 1){
            s[i] = 'b';
            s[n - k] = 'b';
            cout << s <<"\n";
            break;
        }
        k -=(n - i - 1);
    }
}

int main() {
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}