#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  int num;
  cin >> n >> m;
  if (n % 2 && m % 2) {
    num = (max(n, m) / 1) * (min(n, m) / 2) + max(n, m) / 2;
  } else {
    num = (n * m) / 2;
  }
  cout << num << endl;
  return 0;
}