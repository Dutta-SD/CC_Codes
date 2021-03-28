# include <bits/stdc++.h>
# define print(v) {cout << #v << "\n"; for(auto i : v) cout << i << "  "; cout << "\n";}
using namespace std;
using ull = unsigned long long;

int main(){
    int l;
    cin >> l;
    vector <ull> v(l, 0);
    vector <ull> orprefix(l, 0);
    vector <ull> orsuffix(l, 0);
    vector <ull> xorarr(l-1, 0);

    for(auto &i : v){
        cin >> i;
    }

    // cout << "\n\n\n";
    

    orprefix[0] = v[0];
    for(long i = 1; i < l; ++i){
        orprefix[i] = orprefix[i-1] | v[i];
    }

    orsuffix[l-1] = v[l-1];
    for(long i = l-2; i >= 0; --i){
        // cout << "BADorsuffix " << orsuffix[i+1] << ' ' << v[i] << " "<<orsuffix[i] << "\n";
        orsuffix[i] = orsuffix[i + 1] | v[i];
    }

    for(long i = 0; i < l-2; ++i){
        xorarr[i] = orprefix[i] ^ orsuffix[i+1];
    }

    // print(orprefix);
    // print(orsuffix);
    // print(xorarr);


    cout << *min_element(xorarr.begin(), xorarr.end());

    return 0;
}