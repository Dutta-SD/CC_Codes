#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long long unsigned llu_t;

int main() {
  string s;
  bool p_trimmed = false;
  regex r("WUB");
  cin >> s;
  string result = regex_replace(s, r, " ");

  for (size_t i = 0; i < result.size(); i++) {
    while (!p_trimmed && result[i] == ' ')
      i++;
    p_trimmed = true;
    cout << result[i];
  }
  cout << endl;
  return 0;
}