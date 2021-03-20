# include <bits/stdc++.h>
using namespace std;

long sum(const vector<long> & v, long left, long right){
    long s = 0;
    for(long i = left; i <= right; ++i){
        s += v[i];
    }
    return s;
}

int main(){
    long n, x;
    cin >> n >> x;

    vector <long> v(n, 0);
    vector <pair<long, long>> minS;

    for(auto &i : v){
        cin >> i;
    }

    long tempSum = sum(v, 0, x-1);
    minS.push_back({tempSum, 0});

    for(long i = 1; i <= n-x; ++i){
        tempSum -= v[i-1];
        tempSum += v[i + x - 1];
        minS.push_back({tempSum, i});
    }
    sort(minS.begin(), minS.end());

    cout << minS[0].second + 1;
    return 0;    
}