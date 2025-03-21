#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long long unsigned llu_t;

int main() {
    int n, m;
    cin >> n >> m;
    cout << (min(n, m) % 2 ? "Akshat" : "Malvika") << endl;
    return 0;
}