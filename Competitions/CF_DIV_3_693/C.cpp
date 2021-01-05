# include <bits/stdc++.h>
using namespace std;
using ll = long long;
# define print(arr) {cout << "\n"; for(auto i : arr){cout <<"\t"<<i;} cout << "\n";}

void solve(){
    ll n;
    cin >> n;
    vector <ll> arr(n+1, 0);
    vector <ll> s (n+1, 0);

    ll s_max = -1;

    for(ll i = 1; i <= n; ++i){
        cin >> arr[i];
        s[i] = arr[i];
    }

// Correct dp from editorial
    for(ll i = n; i >= 1; --i){
        ll j = i + arr[i];
        if(j <= n){
            s[i] += s[j];            
        }          
    }
    // print(s);
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