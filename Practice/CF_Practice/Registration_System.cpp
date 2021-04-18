# include <bits/stdc++.h>
# pragma GCC optimise("0fast")
# pragma GCC target ("avx,avx2,fma")
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map <string, int> mp;
    // mp.reserve(131072);
    // mp.max_load_factor(0.25);

    while(n--){
        string s;
        cin >> s;
        if(mp.find(s) != mp.end()){
            cout << s << mp[s] <<"\n";
            ++mp[s];
        } else {
            mp[s] = 1;
            cout << "OK\n";
        }
    }

    return 0;
}