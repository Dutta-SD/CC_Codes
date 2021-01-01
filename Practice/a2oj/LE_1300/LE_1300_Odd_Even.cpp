# include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, p;
    cin >> n >> p;

    if (n & 1) {
        // odd
        if (p > n/2 + 1) {
            p -= n/2 + 1;
            // pth from ap 2, 4, ...
            cout << 2 + (p-1)*2;
        }
        else {
            cout << 1 + (p-1)*2;
        }        
    }
    else{
        // even
        if (p > n/2) {
            p -= n/2;
            // pth from ap 2, 4, ...
            cout << 2 + (p-1)*2;
        }
        else {
            cout << 1 + (p-1)*2;
        }
    }

    return 0;
}