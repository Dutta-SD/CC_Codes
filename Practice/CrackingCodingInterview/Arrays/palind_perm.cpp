# include <bits/stdc++.h>
using namespace std;

# define _HASH(e) ((char)e - 'a')

bool is_palin_perm(const string & s){
    // Assume all chars in [a-z]
    int count[26] {0};

    for(auto i : s) count[_HASH(i)]++;

    int n_odd {0};

    for(auto char_count : count) n_odd += char_count & 1;

    if(n_odd > 1) return false;
    return true;
}



int main(){
    string s1;
    cin >> s1;
    cout << is_palin_perm(s1) ? "YES\n" : "NO\n";
    return 0;
}