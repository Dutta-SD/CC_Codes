# include <bits/stdc++.h>
using namespace std;


void solve() {
    long long n, k;
    cin >> n >> k;
    if(n < k || ((n & 1) && (!(k & 1)))){
        cout << "NO\n";
        return;
    }

    long long s[k];
    long long currSum = 0;

    if(n % k == 0){
        cout << "YES\n";
        for(int i = 0; i < k; ++i){
            cout << n / k <<" ";
        }
        cout << "\n";
        return;
    }    

    if((n & 1) && (k & 1)){
        // All odd
        fill(s, s + k, 1);
        currSum = k;
    } else {
        fill(s, s + k, 2);
        currSum = 2*k;
    }

    n -= currSum;

    if(n < 0){
        cout << "NO\n";
        return;
    }

    s[0] += n;

    cout << "YES\n";

    for(int i = 0; i <k; ++i){
        cout << s[i] <<" ";
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}