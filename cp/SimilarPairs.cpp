#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int even = 0, odd = 0;

    for (auto &x : nums) {
        cin >> x;
        (x % 2 == 0) ? even++ : odd++;
    }

    if (even % 2 != odd % 2) {
        cout << "NO\n";
        return;
    }

    if (even % 2 == 0) {
        cout << "YES\n";
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((nums[i] + nums[j]) % 2 == 1 && abs(nums[i] - nums[j]) == 1) {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }
    return 0;
}
