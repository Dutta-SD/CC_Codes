#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int cnt_0 = 0, cnt_1 = 0;
  for (char ch : s) {
    if (ch == '0') {
      cnt_0++;
      cnt_1 = 0;
    } else {
      cnt_1++;
      cnt_0 = 0;
    }
    if (cnt_0 >= 7 || cnt_1 >= 7) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}