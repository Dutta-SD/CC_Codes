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
    int n, count = 0;
    cin >> n;
    int l = 0, r = n - 1;
    int a[n];
    int b[4] = {0};
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      b[a[i]]++;
    }
    
    
  }
  return 0;
}