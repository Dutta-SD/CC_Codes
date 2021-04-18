# include <bits/stdc++.h>
using namespace std;

int main(){
    int n, temp;
    cin >> n;
    // {count, lastIdx}
    vector < pair <int, int> > v {{0, -1}, {0, -1}};
    for(int i = 0; i < n; ++i){
        cin >> temp;
        ++v[temp % 2].first;
        v[temp % 2].second = i + 1;
    }

    if(v[0].first == 1){
        cout << v[0].second;
    } else {
        cout << v[1].second;
    }
    return 0;
}