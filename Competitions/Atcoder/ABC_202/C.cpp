# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int temp;

    long numMatches = 0l;

    cin >> n;

    vector <int> cnt_a (1e5 + 1, 0);
    vector <int> b (n);
    vector <int> c (n);

    for(int i = 0; i < n; ++i){
        cin >> temp;
        cnt_a[temp]++;
    }

    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }

    for(int i = 0; i < n; ++i){
        cin >> c[i];
    }


    for(auto j : c){
        numMatches += cnt_a[b[j - 1]];
    }

    cout << numMatches;
    return 0;

}