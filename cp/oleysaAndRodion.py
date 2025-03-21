n, t = input().split()
if t == "10":
    print("1" + "0" * (int(n) - 1)) if n != "1" else print(-1)
else:
    print(t * int(n))

"""
#include <iostream>
#include <string>
using namespace std;

int main() {
    string n, t;
    cin >> n >> t;
    if (t == "10") {
        if (n != "1")
            cout << "1" << string(stoi(n)-1, '0') << endl;
        else
            cout << -1 << endl;
    }
    else {
        cout << string(stoi(n), t[0]) << endl;
    }
    return 0;
}
"""
