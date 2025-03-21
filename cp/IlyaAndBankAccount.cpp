#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long long llu_t;

int main() {
  llu_t n;
  cin >> n;
  if (n >= 0) {
    cout << n << endl;
  } else {
    llu_t x = n % 10;
    llu_t y = (n / 10) % 10;
    cout << (n / 100) * 10 + max(x, y) << endl;
  }
  return 0;
}