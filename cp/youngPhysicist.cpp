#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  ll x = 0, y = 0, z = 0;
  ll x_t = 0, y_t = 0, z_t = 0;
  cin >> t;
  while (t--) {
    cin >> x_t >> y_t >> z_t;
    x += x_t;
    y += y_t;
    z += z_t;
  }
  if (x == 0 && y == 0 && z == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}