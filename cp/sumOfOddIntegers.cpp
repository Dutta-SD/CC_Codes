#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
using ll = long long;

inline string answer(const ll n, const ll k) {
    return (k * k <= n && (n - k) % 2 == 0) ? "YES" : "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << answer(n, k) << endl;
    }
    return 0;
}