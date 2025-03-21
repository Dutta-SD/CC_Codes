#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
using ll = long long unsigned;

inline void solve(const ll n) {
    ll s1 = 0, s2 = 0, x = 0;
    for (ll i = 0; i < n; i++) {
        cin >> x;
        s1 += x;
    }

    for (ll i = 0; i < n - 1; i++) {
        cin >> x;
        s1 -= x;
        s2 += x;
    }

    for (ll i = 0; i < n - 2; i++) {
        cin >> x;
        s2 -= x;
    }

    cout << s1 << endl << s2 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1, n;
    while (t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}