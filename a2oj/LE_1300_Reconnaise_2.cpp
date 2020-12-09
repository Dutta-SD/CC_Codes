# include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    map< int, pair<int, int> > mp;
    cin >> n;
    int soldiers[n];
    for(int i = 0; i < n; ++i) {
        cin >> soldiers[i];
    }
    for(int i = 0; i < n-1; ++i){
            mp[abs(soldiers[i] - soldiers[i+1])] = {i+1, i+1+1};
    }

    mp[abs(soldiers[n-1] - soldiers[0])] = {1, n};

    cout << mp.begin()->second.first << " " <<mp.begin()->second.second << "\n";
    return 0;
}