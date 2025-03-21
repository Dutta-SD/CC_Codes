#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
  int numLines;
  ll target = 0;
  cin >> numLines;
  while (numLines--) {
    string operation;
    cin >> operation;
    if (operation.find("+") != std::string::npos) {
      ++target;
    } else {
      --target;
    }
  }
  cout << target << endl;
  return 0;
}