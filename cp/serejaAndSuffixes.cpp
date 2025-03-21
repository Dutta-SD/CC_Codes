#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;

// #define DEBUG

#ifdef DEBUG
FILE *file = freopen("output.txt", "w", stdout);
#endif

void doit() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 2, -1), b(n + 2, 0);
    unordered_set<int> us;

    for (int i = 1; i < n + 1; i++) {
        cin >> a[i];
    }

    for (int i = n; i > 0; i--) {
        if (us.find(a[i]) == us.end()) {
            // Distinct
            us.insert(a[i]);
            b[i] = b[i + 1] + 1;
        } else {
            b[i] = b[i + 1];
        }

        // cout << "i " << i << "A_i " << a[i] << "B_i " << b[i] << endl;
    }
    while (m--) {
        int l;
        cin >> l;
        cout << b[l] << endl;
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