# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> v(n);

    for(auto &i: v){
        cin >> i;
    }

    sort(v.begin(), v.end());

    int q;
    cin >> q;

    while(q--){
        int t;
        cin >> t;
        auto i = upper_bound(v.begin(), v.end(), t) - v.begin();
        cout << i <<"\n";
    }
    return 0;
}