# include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, t;
    cin >> n;
    t = n;
    for(ll i = 1; i < n; ++i){
        t += i * (n - i);
    }
    cout << t;
    return 0;
}