# include <bits/stdc++.h>
using namespace std;
void solve(){
    long long a, b ,d;
    cin >> a >> b >> d;
    long long M = max(a, b);
    long long m = min(a, b);

    if(M > (m * (d + 1))) cout << "NO\n";
    else cout << "YES\n";
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}