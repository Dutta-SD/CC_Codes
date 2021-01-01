# include <bits/stdc++.h>
using namespace std;

int main() {
    // Greedy Strategy
    int n, m;
    cin >> n >> m;
    vector <int> v(n, 0);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long sum = 0;
    for(int i = 0; i < m; ++i) {
        sum += (v.at(i) < 0 ? (-1) * v.at(i) : 0);
    }
    cout << sum;
    return 0;
}