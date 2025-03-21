#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
  string s;
  cin >> s;
  set<char> d_chars(s.begin(), s.end());

  if (d_chars.size() % 2) {
    cout << "IGNORE HIM!";
  } else {
    cout << "CHAT WITH HER!";
  }

  return 0;
}