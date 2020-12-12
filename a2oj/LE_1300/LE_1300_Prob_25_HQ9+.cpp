# include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool flag = false;
    for(auto i : s){
        if(i == 'H' || i == 'Q' || i == '9'){
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
    return 0;
}