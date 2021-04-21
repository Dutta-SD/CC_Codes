# include <bits/stdc++.h>
// # define printarr(v) {cout << #v <<"\n"; for(auto &i : v) cout << i <<" "; cout << "\n";}
using namespace std;

void solve(){
    unsigned n, k;
    cin >> n;
    vector <unsigned> v(n);
    vector <unsigned> xor_left(n);
    vector <unsigned> xor_right(n);

    for(auto &i : v) cin >> i;

    xor_left[0] = xor_right[0] = v[0];
    xor_left[n-1] = xor_right[n-1] = v[n-1];

    for(unsigned i = 1; i < n - 1; ++i){
        xor_left[i] = xor_left[i - 1] ^ v[i];
    }

    for(unsigned i = n - 2; i > 0; --i){
        xor_right[i] = xor_right[i + 1] ^ v[i];
    }

    // printarr(xor_left);
    // printarr(xor_right);


    // Final Loop
    for(unsigned i = 0; i < n - 1; ++i){

        // cout << "CHECKING  :  " << i << " POSITION\n";
        if(xor_left[i] == xor_right[i +1]){

        
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";   
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}