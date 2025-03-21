#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t = 1;
  //   cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    x--;
    int i = 0;
    int arr[n - 1];
    for (int j = 0; j < n - 1; j++) {
      cin >> arr[j];
    }
    while (i <= x) {
      if (i == x) {
        cout << "YES\n";
        return 0;
      }
      i += arr[i];
    }
    cout << "NO\n";
  }
  return 0;
}