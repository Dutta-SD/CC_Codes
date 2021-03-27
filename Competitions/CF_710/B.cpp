# include <bits/stdc++.h>
using namespace std;
using ll  = long long;

void solve(){
    string s1;
    vector <int> pos;
    int n, k;
    cin >> n >> k;
    cin >> s1;
    for(auto i = 0; i < s1.size(); ++i){
        if(s1[i] == '*') pos.emplace_back(i);
    }

    ll i = 0, j = pos.size() - 1;
    ll count = 1;
    // already start and end must be converted
    while(i <= j){
        if(j-i > k-1){
            ++count;

            if(pos[i+1] - pos[i] > pos[j] - pos[j-1]) cout << "i " << ++i << "\n";                
            else cout <<"j "<< --j <<"\n";
            
        } 
        else break;
    }

    cout << count <<"\n";    
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
    
}

