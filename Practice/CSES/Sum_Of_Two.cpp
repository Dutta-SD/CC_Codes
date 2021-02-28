# include <bits/stdc++.h>
using namespace std;

int main(){
    long n, x, t;
    cin >> n >> x;
    vector<pair<long, long>> v (n);

    for(long i = 0; i < n; ++i){
        cin >> t;
        v[i] = {t, i+1};
    }

    sort(v.begin(), v.end());

    long i = 0, j = n-1;
    while (i < j){
        long sum = v[i].first + v[j].first;
        if (sum == x) { 
            cout << v[i].second <<" "<<v[j].second;
            break;
        }
        else if (sum < x) i++;
        else j--;
    }

    if(i >= j){
        cout << "IMPOSSIBLE";
    }   

    return 0;
}