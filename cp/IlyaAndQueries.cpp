#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;

void doit() {
    string s = "X", s_temp;
    int m;
    cin >> s_temp;
    s += s_temp;
    vector<int> v(s.size(), 0);

    for (size_t i = 1; i < s.size(); i++) {
        if (s.at(i) == s.at(i - 1)) {
            v.at(i) = v.at(i - 1) + 1;
        } else {
            v.at(i) = v.at(i - 1);
        }
    }

    cin >> m;
    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << v.at(r) - v.at(l) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    while (t--) {
        doit();
    }
    return 0;
}