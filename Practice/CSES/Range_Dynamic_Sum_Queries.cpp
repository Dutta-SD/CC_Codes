# include <bits/stdc++.h>
// # define DEBUG 1
using namespace std;
using ll = long long;

struct FenwickTree{

    int n;
    vector <ll> bit;

    FenwickTree(int n){
        this->n = n;
        bit.assign(n, 0);
    }

    FenwickTree(vector<ll> a) : FenwickTree(a.size()) {
        for(size_t i = 0; i < a.size(); ++i){
            add(i, a[i]);
        }
    }

    ll sum(int r){
        ll result = 0;
        for(;r >= 0; r = (r & (r + 1)) - 1){
            result += bit[r];
        }
        return result;
    }

    ll sum(int l, int r){
        return sum(r) - sum(l-1);
    }

    void add(int idx, ll delta){
        for(;idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};


int main(){
    int n, q, temp;
    cin >> n >>q;
    FenwickTree tree = FenwickTree(n);

    for(int i = 0; i < n; ++i){
        cin >> temp;
        // Construction of a Fenwick Tree
        tree.add(i, temp);
    }

    while(q--){
        int arg1, arg2, arg3;
        cin >> arg1 >> arg2 >> arg3;

        if(arg1 == 2){
            --arg2;
            --arg3;
            cout << tree.sum(arg2, arg3) << "\n";
        } else {
            --arg2;
            #ifdef DEBUG
                ll temparg = arg3 - 1;
                cout << "\n";
                cout << arg1 <<" "<< arg2 <<" "<<arg3 << "\n";
                cout << "Update Delta : " << temparg - tree.sum(temparg, temparg);
            #endif
            tree.add(arg2, arg3 - tree.sum(arg2, arg2));
        }       
    }
    return 0;
}