# include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    if(t != 10){
        for(auto i = 0; i < n; ++i){
            cout << t;
        }
    } else {
        // t == 10
        if(n > 1){
            cout << 1;
            for(auto i = 1; i < n; ++i){
                cout << 0;
            }
        } else {
            cout << -1;
        }
    }
    return 0;
}