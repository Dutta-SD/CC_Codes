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

/* 
INPLACE IDEA:
----------------------------------------------------------------------
1> Sort the Array
2> Traverse the array.  If get a char which is not same as prev char:
    count occurrences
    move pointer ahead by 1

    if count is odd, n_odd ++;
3> if n_odd < 2, then good;

*/

int main(){
    string s1;
    cin >> s1;
    cout << is_palin_perm(s1) ? "YES\n" : "NO\n";
    return 0;
}