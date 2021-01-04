# include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll x, d, k;
    cin >> x >>k >>d;
    x = abs(x);

    ll t = min(k, x / d);
    k -= t;
    x -= d*t;
    if(k % 2 == 0){
        cout << x;
    }
    else {
        cout << abs(x-d);
    }  
    return 0;
}