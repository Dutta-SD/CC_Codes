# include <bits/stdc++.h>
# define MAXLEN 200000 + 1
using namespace std;
using ll = long long;

vector <ll> v(MAXLEN);
vector <ll> s(MAXLEN);

int main(){
    long n, t;
    cin >> n >> t;
    for(auto i = 0; i < n; ++i){
        cin >> v[i];
    }
    partial_sum(v.begin(), v.end(), s.begin()+1);

    while(t--){
        long a, b;
        cin >> a >> b;
        cout << s[b] - s[a-1] <<"\n";
    }

    return 0;
}