# include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solution(){
    ll n, k;

    cin >> n >> k;

    ll min_p = n;

    for(ll f = k; f  >= 1; --f){
        if(n % f == 0){
            min_p = n / f;
            break;
        }
    }

    cout << min_p<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solution();
    }
    return 0;
}