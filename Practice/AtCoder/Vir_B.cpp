# include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, temp;
    cin >> n >> m;

    vector<int> a;
    vector <int> b;

    vector <int> c;

    for(int i = 0; i < n; ++i){
        cin >> temp;
        a.emplace_back(temp);
    }

    for(int i = 0; i < m; ++i){
        cin >> temp;
        b.emplace_back(temp);
    }

    set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));

    for(auto i : c) cout << i << " ";
    return 0;
}