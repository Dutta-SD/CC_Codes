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
  vector<pair<int, int>> v;
  while (t--) {
    int a, b;
    cin >> a >> b;
    v.push_back({a, b});
  }
  sort(v.begin(), v.end(),
       [](const pair<int, int> &a, const pair<int, int> &b) -> bool {
         return a.first < b.first;
       });

  for (size_t i = 0; i < v.size() - 1; i++) {
    if (v[i].second > v[i + 1].second) {
      cout << "Happy Alex" << endl;
      return 0;
    }
  }
  cout << "Poor Alex" << endl;
  return 0;
}