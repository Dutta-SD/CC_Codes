# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n  >> x;
    int a[n];
    int count[2] {0, 0};
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        ++count[a[i] % 2];
    }

    if(x % 2 == 1 && count[1] >= x){
        cout << "Yes\n";
        return;
    }

    for(int i = 1; x - i > 0; i += 2){
        if(count[1] >= i && count[0] >= x - i){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";   
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}