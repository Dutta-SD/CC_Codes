# include <bits/stdc++.h>
using namespace std;

bool check_input_ok(string s1, string s2){
    if(!s1.length() || !s2.length()) return false;
    if(s1.length() != s2.length()) return false;
}

bool is_perm(string s1, string s2){

    if(!check_input_ok(s1, s2)) return false;    

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for(int i = 0; i < s1.length(); ++i){
        if(s1.at(i) != s2.at(i)) return false;
    }
    return true;
}

int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if(is_perm(s1, s2)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}