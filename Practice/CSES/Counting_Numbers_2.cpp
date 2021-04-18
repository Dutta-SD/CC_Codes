# include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, temp, nRounds {1};
    cin >> n >> m;
    vector <int> positions(n + 1);
    vector <int> arr (n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> temp;
        arr[i] = temp;
        positions[temp] = i;
    }

    for(int i = 1; i < n; ++i){
        if(positions[i] > positions[i + 1]) ++nRounds;
    }

    for(int i = 1; i <= m; ++i){
        int a, b;
        cin >> a >> b;
        if(arr[a] < arr[b]){
            
        }

    }

    cout << nRounds;
    return 0;
}