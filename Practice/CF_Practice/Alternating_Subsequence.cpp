# include <bits/stdc++.h>
# define print(v) {cout << "\n\n"; for(auto i  : v) cout << i <<"\t"; cout << "\n\n";}
# define parity(x) ((x) >= 0 ? 1:-1)
using namespace std;

void solve(){
    int n;
    cin >> n;
    long v[n];
    long long s{0};
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    vector<int> idx {0};

    // see end points of the array
    for(int i = 0; i < n - 1; ++i){
        if(parity(v[i + 1]) != parity(v[idx.back()])){
            idx.push_back(i + 1);
        }
    }

    // Push back last index
    idx.push_back(n);

    // print(idx);

    for(int i = 0; i  < idx.size() - 1; ++i){
        s += *max_element(v + idx[i], v + idx[i + 1]);
    }

    cout << s <<"\n";    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}