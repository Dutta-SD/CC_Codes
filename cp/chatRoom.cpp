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
    string s;
    cin >> s;
    if (regex_match(s, regex(".*h.*e.*l.*l.*o.*")))
      cout << "YES";
    else
      cout << "NO";
  }
  return 0;
}