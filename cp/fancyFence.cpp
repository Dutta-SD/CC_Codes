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
    int l;
    cin >> l;
    if (360 % (180 - l)) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
  return 0;
}