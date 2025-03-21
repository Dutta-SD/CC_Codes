#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int total = 0;
  cin >> n;
  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c >= 2)
      total++;
  }
  cout << total << endl;
  return 0;
}