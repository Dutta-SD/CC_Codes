# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long n, m, temp;
    cin >> n >> m;
    multiset<long> v;

    for(long i = 0; i < n; ++i){
        cin >> temp;
        v.insert(temp);
    }

    while(m--){
        cin >> temp;
        auto i = v.upper_bound(temp);
        if(i == v.begin()){
            cout << -1 << "\n";
        } else {
            --i;
            cout << *i <<"\n";
            v.erase(i);
        }
    }
    return 0;
}