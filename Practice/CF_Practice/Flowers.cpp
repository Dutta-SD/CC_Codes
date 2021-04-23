# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
using namespace std;

int main(){
    int n;
    long temp;
    long long numWays {0};
    cin >> n;
    map<long long, long long> mp;

    for (int i = 0; i < n; ++i){
        cin >> temp;
        if(mp.find(temp) != mp.end()){
            ++mp[temp];
        }
        else mp[temp] = 1;
    }

    if(mp.size() == 1){
        cout << 0 << " " << (((mp.begin() -> second) *((mp.begin() -> second) - 1)) >> 1);
        return 0;
    }

    long diff = (mp.rbegin()-> first) - (mp.begin() -> first);

    numWays = (mp.rbegin()-> second)*(mp.begin() -> second);

    cout << diff << " " << numWays;
    return 0;
} 