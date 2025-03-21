#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  int n_years = 0;
  cin >> a >> b;
  while (true) {
    a *= 3;
    b *= 2;
    ++n_years;
    if (a > b) {
      break;
    }
  }
  cout << n_years << endl;
  return EXIT_SUCCESS;
}
