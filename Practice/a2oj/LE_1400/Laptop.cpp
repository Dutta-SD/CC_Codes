# include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int main(){
    int n;
    cin >> n;
    vector <pair <int, int> > v(n);
    for(auto &x : v){
        cin >> x.first >> x.second;
    }
    sort(v.begin(), v.end());
    if(is_sorted(v.begin(), v.end(), comp)){
        cout << "Poor Alex";
    } else {
        cout << "Happy Alex";
    }
    return 0;
}
