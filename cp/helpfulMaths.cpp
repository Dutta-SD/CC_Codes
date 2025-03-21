#include <bits/stdc++.h>
using namespace std;

string joinCharVector(const vector<char> &charVector, char delimiter) {
  if (charVector.empty()) {
    return "";
  }

  size_t requiredSize = charVector.size() + (charVector.size() - 1);
  string result;
  result.reserve(requiredSize);

  bool first = true;
  for (char c : charVector) {
    if (!first) {
      result += delimiter;
    }
    result.push_back(c);
    first = false;
  }

  return result;
}

int main() {
  string s;
  vector<char> v;
  cin >> s;

  for (size_t i = 0; i < s.length(); i++) {
    if (s[i] != '+') {
      v.push_back(s[i]);
    }
  }

  sort(v.begin(), v.end());

  cout << joinCharVector(v, '+');
  return 0;
}