#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll hp(ll a ,ll x){
    // x >= 2
    ll count = 0;
    while(a % x == 0){
        ++count;
        a /= x;
        if(a == 0) break;
    }
    return count;
}

void solve(){
    ll n, x;
    cin >> n >> x;
    vector <ll> v(n);
    vector <ll> b(n);
    ll sum =  0;
    for(auto i = 0 ; i < n; ++i){
        cin >> v[i];
        b[i] = hp(v[i], x);
        sum += v[i]; 
    }
    
    ll min_pos = min_element(b.begin(), b.end()) - b.begin();

    sum *= (b[min_pos] + 1);


    for(auto i = 0; i < min_pos; ++i){
        sum += v[i];
    }

    cout << sum << "\n";
     
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}