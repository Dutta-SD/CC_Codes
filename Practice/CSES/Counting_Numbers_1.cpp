# include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp, nRounds {1};
    cin >> n;
    vector <int> positions(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> temp;
        positions[temp] = i;
    }

    for(int i = 1; i < n; ++i){
        if(positions[i] > positions[i + 1]) ++nRounds;
    }

    cout << nRounds;
    return 0;
}