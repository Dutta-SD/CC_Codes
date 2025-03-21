#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using llu_t = long long unsigned;

int main() {
  llu_t n, x;
  cin >> n;
  while (n--) {
    cin >> x;
    cout << (x & (x - 1) ? "YES" : "NO") << endl;
  }
  return 0;
}