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
  map<string, ll> mp;
  string s;
  while (t--) {
    cin >> s;
    if (!mp.count(s)) {
      mp[s] = 1;
    } else {
      mp[s]++;
    }
  }
  ll m = -1;
  string s2;
  for (auto it : mp) {
    if (it.second > m) {
      s2 = it.first;
      m = it.second;
    }
  }
  cout << s2 << endl;
  return 0;
}