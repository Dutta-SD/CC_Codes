# include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, voter;
    cin >> n;

    ll upvote = 0, downvote = 0;

    for(int i = 0; i < n; ++i){
        cin >> voter;
        if(voter == 1) ++upvote;
        else if(voter == 2) ++downvote;
        else ++upvote;
    }

    cout << upvote <<"\n";
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}