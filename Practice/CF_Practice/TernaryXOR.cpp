# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string s1;
    string maxS (n, '0');
    string minS (n, '0');

    cin >> s1;

    for(auto i = 1; i < s1.size(); ++i){
        if(s1[i] == '1'){
            minS[i] = '0';
            maxS[i] = '1';
            // once maxS has a 1, it is larger than minS. Make all characters equal
            for(int j = i + 1; j < s1.size(); ++j){
                maxS[j] = '0';
                minS[j] = s1[j];
            }
            break;            
        }
        else {
            if(s1[i] == '2'){
                minS[i] = '1';
                maxS[i] = '1';
            }            
        }
    }

    if(s1[0] == '1'){
        minS[0] = '2';
        maxS[0] = '2';
    } else {
        minS[0] = '1';
        maxS[0] = '1';
    }

    cout << maxS <<"\n" << minS <<"\n";
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}