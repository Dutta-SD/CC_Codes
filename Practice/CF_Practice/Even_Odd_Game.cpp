# include <bits/stdc++.h>
using namespace std;

void solve(){
    long l;
    cin >> l;
    vector<long> scores(l);
    for(auto &i : scores){
        cin >> i;
    }
    sort(scores.rbegin(), scores.rend());
    long alice = 0, bob = 0;
    for(long i = 0 ;i < l; ++i){
        if(i & 1){
            bob += (scores[i] & 1 ? scores[i] : 0);
        } else {
            alice += (scores[i] & 1 ? 0 : scores[i]);
        }
    }

    // cout << "Bob " << bob << "Alice " << alice <<"\n";

    if(bob > alice){
        cout << "Bob\n";
    } 
    else if (alice > bob) {
        cout << "Alice\n";
    }
    else {
        cout << "Tie\n";
    }    
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}