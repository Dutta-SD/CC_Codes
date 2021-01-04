# include <bits/stdc++.h>
using namespace std;
using ll =long long unsigned;

int main(){
    ll n, x;
    cin >> n;
    auto flag =true;
    set <ll> s;
    for(ll i = 0; i < n; i++){
        cin >> x;
        s.insert(x);        
    }
    if(s.size() < n){
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;    
}