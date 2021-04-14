# include <bits/stdc++.h>
using namespace std;
// # pragma GCC optimize("03")

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;

    vector <int> v(n);

    for(auto & x : v){cin >> x;}

    while(q--){
        int x;
        cin >> x;
        int p = find(v.begin(), v.end(), x) - v.begin();
        cout << p+1 <<" ";
        rotate(v.begin(), v.begin() + p, v.begin() + p + 1);
    }

    return 0;
}