#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) {
        ll x;
        bool found = false;
        unordered_set<ll> cubes;
        cin >> x;
        ll a = 1;
        while (a * a * a < x) {
            ll b = x - a * a * a;
            if (cubes.count(b) || b == a * a * a) {
                found = true;
                break;
            }
            cubes.insert(a * a * a);
            ++a;
        }
        cout << (found ? "YES" : "NO") << "\n";
    }
    return 0;
}