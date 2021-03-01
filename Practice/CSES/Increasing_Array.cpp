# include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> v(n+1);
    long long moves = 0;
    for(int i = 1; i<= n; ++i){
        cin >> v[i];
    }
    v[0] = v[1];

    for(int i = 1; i <= n; ++i){
        int prev = i - 1;
        if(v[prev] > v[i]){
            moves -= v[i] - v[prev];
            v[i] = v[i-1];
        }
    }

    cout << moves;
    return 0;   
}