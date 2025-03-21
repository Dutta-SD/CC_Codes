#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int hours = a;
  int leftovers = a;

  while (leftovers >= b) {
    int new_candles = leftovers / b;
    hours += new_candles;
    leftovers = leftovers % b + new_candles;
    cout << hours << " " << leftovers << endl;
  }

  cout << hours << endl;
  return 0;
}
