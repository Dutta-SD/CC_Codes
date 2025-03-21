#include <bits/stdc++.h>
// #pragma GCC optimize("Ofast")
using namespace std;
typedef long long unsigned llu_t;

int main() {
  llu_t n, k;
  cin >> n >> k;
  llu_t d2 = (n % 2 ? n : n - 1) + 1;
  llu_t k2 = 2 * k;

  cout << (k2 <= d2 ? k2 - 1 : k2 - d2) << endl;
  return 0;
}