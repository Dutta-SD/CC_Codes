#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long long unsigned llu_t;

int main() {
  int n, m;
  cin >> n >> m;
  int arr[m];
  for (int i = 0; i < m; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + m);
  int result = INT_MAX;
  for (int i = 0; i <= m - n; i++) {
    result = min(result, arr[i + n - 1] - arr[i]);
  }
  cout << result << endl;
  return EXIT_SUCCESS;
}