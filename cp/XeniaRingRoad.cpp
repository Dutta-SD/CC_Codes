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
    ll n, m;
    cin >> n >> m;
    ll arr[m];
    for (ll i = 0; i < m; i++) {
      cin >> arr[i];
    }
    ll curr = 1;
    ll time = 0;
    for (ll i = 0; i < m; i++) {
      if (arr[i] >= curr) {
        time += arr[i] - curr;
      } else {
        time += n - curr + arr[i];
      }
      curr = arr[i];
    }
    cout << time << "\n";
  }
  return 0;
}