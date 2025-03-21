#include <bits/stdc++.h>
using namespace std;

int main() {
  int numberOfItems;
  cin >> numberOfItems;
  while (numberOfItems--) {
    string stringToShorten;
    cin >> stringToShorten;
    if (stringToShorten.length() > 10) {
      cout << stringToShorten[0] << stringToShorten.length() - 2
           << stringToShorten[stringToShorten.length() - 1] << endl;
    } else {
      cout << stringToShorten << endl;
    }
  }
  return EXIT_SUCCESS;
}