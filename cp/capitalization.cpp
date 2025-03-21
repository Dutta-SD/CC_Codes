#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s.empty()) {
    cout << "" << endl;
    return 0;
  }
  char ch = toupper(s[0]);

  cout << string(1, ch) + string(s.begin() + 1, s.end()) << endl;
  return 0;
}