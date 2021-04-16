# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
using namespace std;
using ll = long long;

vector <ll> v(2000, 0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    ll sum = 0;

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.begin() + n);

    // cout << "MAX IS" << largest <<"\n";



    for(int i = 0; i < n; ++i){
        sum += v[i] - v[0];
    }

    cout << sum;
    return 0;
}