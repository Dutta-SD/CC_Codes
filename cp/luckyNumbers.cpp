#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t = 1;
  vector<int> a = {0, 4, 7};
  vector<int> b = {0, 4, 7};
  vector<int> c = {4, 7};
  //   cin >> t;
  while (t--) {
    ll x;
    cin >> x;
    for (int i = 0; i < a.size(); i++)
      for (int j = 0; j < b.size(); j++)
        for (int k = 0; k < c.size(); k++) {
          ll num = 100 * a[i] + 10 * b[j] + c[k];
          if (x % num == 0) {
            cout << "YES\n";
            return 0;
          }
        }
  }
  cout << "NO\n";
  return 0;
}