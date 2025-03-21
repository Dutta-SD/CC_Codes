#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long long unsigned llu_t;

int main() {
  llu_t t;
  cin >> t;
  while (t--) {
    llu_t n;
    cin >> n;
    llu_t k = n / 2020;
    llu_t m = n % 2020;
    if (k >= m) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}