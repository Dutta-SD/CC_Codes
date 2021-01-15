# include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll sum = 0;
    int k;
    cin >> k;
    for(ll i = 1; i <= k; ++i){
        for(ll j = 1; j <= k; ++j){
            for(ll l = 1; l <= k; ++l){
                if(i == 1 || j == 1 || l == 1){
                    sum ++;
                    continue;
                }
                ll a = __gcd(i, j);
                a = __gcd(a, l);
                sum += a;
            }
        }
    }
    cout << sum;
    return 0;
}