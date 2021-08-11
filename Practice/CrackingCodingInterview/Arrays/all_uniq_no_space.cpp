# include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    for(int i = 0; i < s.length() - 1; ++i){
        if(s[i] == s[i + 1]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}