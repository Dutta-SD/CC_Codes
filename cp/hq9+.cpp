#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long long unsigned llu_t;

int main() {
  string s;
  cin >> s;
  for (char c : s) {
    if (c == 'H' || c == 'Q' || c == '9') {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}