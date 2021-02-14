# include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll hp5(ll i){
    ll count = 0;
    while(i % 5 == 0 && i != 0){
        ++count;
        i /= 5;
    }
    return count;
}


int main() {
    ll n;
    cin >> n;
    ll num_5 = 0;
    for(ll i = 5; i <= n; i += 5){
        num_5 += hp5(i);
    }
    cout << num_5;
    return 0;
}