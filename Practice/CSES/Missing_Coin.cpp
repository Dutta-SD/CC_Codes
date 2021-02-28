# include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    vector<long> v (n);

    for(long i = 0; i < n; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long s= 1, i = 0;

    while (i < n){
        if(s < v[i]) break;
        s += v[i];
        i++;
    }

    cout << s;
    return 0;
}