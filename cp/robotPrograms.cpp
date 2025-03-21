#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;

#define DEBUG

#ifdef DEBUG
FILE *file = freopen("output.txt", "w", stdout);
#endif

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll t = 1;
  cin >> t;
  while (t--) {
    ll n, x, k;
    ll pl = 0;
    size_t i;
    string s;
    cin >> n >> x >> k;
    cin >> s;
    for (i = 0; i < n; i++) {
      s[i] == 'L' ? x-- : x++;
      pl++;
      if (!x)
        break;
    }
    if (i == n) {
        cout << 0 << endl;
    } else if ()
  }
  return 0;
}