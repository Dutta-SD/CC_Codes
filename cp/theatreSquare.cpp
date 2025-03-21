#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll n, m, a;
  cin >> n >> m >> a;
  cout << (ll)ceil((double)n / a) * (ll)ceil((double)m / a) << endl;
  return 0;
}