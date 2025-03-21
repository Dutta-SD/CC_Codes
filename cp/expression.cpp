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
    int a, b, c, m = 0;
    cin >> a >> b >> c;
    m = max(a + b + c, m);
    m = max(a * b * c, m);
    m = max((a + b) * c, m);
    m = max(a * (b + c), m);
    m = max(a * b + c, m);
    m = max(a + b * c, m);
    cout << m << endl;
  }
  return 0;
}