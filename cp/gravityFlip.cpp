#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long long unsigned llu_t;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}