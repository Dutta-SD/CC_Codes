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
    int l, ob = 0, cb = 0, f = 0;
    string s;
    cin >> l;
    cin >> s;
    for (int i = 0; i < l; i++) {
      if (s[i] == ')' && !ob) {
        f++;
      } else if (s[i] == '(') {
        cb++;
        ob--;
      } else if (s[i] == ')') {
        cb--;
        ob++;
      }
    }
    cout << f << endl;
  }
  return 0;
}