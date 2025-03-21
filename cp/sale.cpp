#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long long llu_t;

int main() {
  llu_t n, m;
  cin >> n >> m;
  llu_t arr[n];
  for (llu_t i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  llu_t sum = 0;
  for (llu_t i = 0; i < n; i++) {
    if (arr[i] < 0 && m > 0) {
      sum -= arr[i];
      m--;
    }
  }
  cout << sum << endl;
  return 0;
}