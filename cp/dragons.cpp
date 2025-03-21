#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t = 1;

  while (t--) {
    ll s, n;
    bool defeat = false;
    cin >> s >> n;

    vector<pair<ll, ll>> v(n);

    for (ll i = 0; i < n; i++) {
      cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    for (pair<ll, ll> p : v) {
      if (s <= p.first) {
        defeat = true;
        break;
      }
      s += p.second;
    }
    cout << (defeat ? "NO" : "YES") << endl;
  }
  return 0;
}