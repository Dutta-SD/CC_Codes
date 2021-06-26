# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> v(n);

    int minNum = INT_MAX;
    int minCount = 0;

    for(auto &i : v){
        cin >> i;
        minNum = min(minNum, i);
    }
    for(auto i : v){
        if(i == minNum) ++minCount;
    }

    cout << n - minCount <<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}