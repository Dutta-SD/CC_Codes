# include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<char> all_chars;
    string s;
    cin >> s;

    for(auto i : s) all_chars.insert(i);

    cout << (all_chars.size() == s.size());
    return 0;
}