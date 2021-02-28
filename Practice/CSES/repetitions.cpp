# include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector <int> m (s.size(), 0);
    m[0] = 1;
    for(auto i = 1; i < s.size(); ++i){
        if(s[i] == s[i-1]) m[i] = m[i-1] + 1;
        else m[i] = 1;
    }
    cout << *max_element(m.begin(), m.end());
    return 0;
}