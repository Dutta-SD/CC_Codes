# include <iostream>
using namespace std;
using ll = long long;

void solve(){
    ll a, b;
    cin >> a >> b;
    ll d = a + b;
    if(d % 3){
        cout << "NO\n";
        return;
    } else {
        d /= 3;
        if (a - d >= 0 && b - d >= 0){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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