# include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1;

    cin >> s1;

    int i = s1.find("11");
    int j = s1.rfind("00");

    if(i != -1 && j != -1 && i < j) cout<<"NO\n";
    else cout << "YES\n";   
}


int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}