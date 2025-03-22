#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) {
        int n, m, z = -1, var;
        unordered_map<int, int> mp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> var;
            mp[var]++;
            z = max(z, mp[var]);
        }
        m = mp.size();
        if (m == z) {
            cout << m - 1 << "\n";
        } else {
            cout << min(m, z) << "\n";
        }
    }
    return 0;
}