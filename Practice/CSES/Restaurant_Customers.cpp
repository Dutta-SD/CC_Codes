# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    set <pair <long, long> > s;
    int n, a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        s.insert({a, 1});
        s.insert({b, -1});
    }

    long counts {0}, sum {0};

    while(!s.empty()){
        sum += s.begin() -> second;
        s.erase(s.begin());
        counts = max(counts, sum);
    }

    cout << counts;
    return 0;    
}