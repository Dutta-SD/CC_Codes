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
    ll x;
    cin >> x;
    cout << __builtin_popcount(x) << endl;
  }
  return 0;
}