# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int n;
    int q;
    cin >> n;
    cin >> s;
    cin >> q;
    int t, a, b;
    int start = 0;
    while(q--){
        cin >> t >> a >> b;
        --a;
        --b;
        if(t == 1){
            if(start){
                a += (start);
                b += (start);
            }
                swap(s[a % (2*n)], s[b % (2*n)]);
        } else {
            start = (start == n) ? 0 : n;
        }
    }

    if(!start){
        cout << s;
        return 0;
    }

    for(int i = start; i < s.size(); ++i){
        cout << s[i];
    }
    for(int i = 0; i < start; ++i){
        cout << s[i];
    }
    return 0;
}