# include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    vector<long> v (n);

    for(auto &i : v){
        cin >> i;
    }

    long s = 0, b = INT_MIN;

    for(long k = 0; k <= n-1; k++){

        s = max(s + v.at(k), v.at(k));
        b = max(b, s);
    }

    cout << b;
    return 0;
}