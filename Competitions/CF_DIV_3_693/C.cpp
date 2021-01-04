# include <bits/stdc++.h>
using namespace std;
using ll = long long;
# define print(arr) {cout << "\n"; for(auto i : arr){cout <<"\t"<<i;} cout << "\n";}

void solve(){
    ll n;
    cin >> n;
    vector <ll> arr(n+2, 0);
    vector <ll> s (n+2, -1);

    ll s_max = -1;

    for(ll i = 1; i <= n; ++i){
        cin >> arr[i];
        s[i] = arr[i];
    }

    for(ll i = 1; i <= n; ++i){
        if(i + arr[i] <= n){
            ll next_idx = i + arr[i];
            s[next_idx] = max(arr[i] + arr[next_idx], s[next_idx]);
        }          
    }
    print(s);
    cout << *max_element(s.begin(), s.end()) <<"\n";     
}
int main() {
    ll t;
    cin >> t;
    while(t--){
        solve();
    }    
    return 0;
}