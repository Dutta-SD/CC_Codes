# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector < pair<int, int> > old(n);
    vector < pair<int, int> > newv;
    
    for(auto i = 0; i < n; ++i){
        int a, b;
        cin >> a;
        old[i] = {a, i};        
    }

    make_heap(old.begin(), old.end());
    
    while(old.size() > 0){
        auto a = old.front();
        pop_heap(old.begin(), old.end());
        if(a.second >= n) continue;
        newv.insert(newv.end(), old.begin() + a.second, old.end());
        old.erase(old.begin() + a.second, old.end());
    }

    for(auto i : newv){
        cout << i.first <<" ";
    }
    cout << "\n";

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}