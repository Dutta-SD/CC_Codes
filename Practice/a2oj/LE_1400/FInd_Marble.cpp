# include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s ,t;
    cin >> n >> s >> t;
    vector <int> v (n, 0);
    vector <int> p (n, 0);
    for(int i = 0 ; i < n;++i){
        v[i] = i+1;
    }
    for(int i = 0 ; i < n;++i){
        cin >> p[i];
    }
    int num_moves = 0;
    while(true){
        // If final position found already
        if(t == v[s]){
            break;
        }
        // Shuffle
        for(int i = 0 ; i < n;++i){
            v[i] = v[p[i]];
        }
        // If get back same number
        if(s == v[s]){
            cout << "-1";
            return 0;
        }
        ++num_moves;
    }
    return 0;
}