# include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    vector <int> v(3010, 0);
    v[0] = 1;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        v[temp]++;
    }
    for(int i = 0; i < 3010; ++i){
        if(v[i] == 0){
            cout << i<<endl;
            break;
        }      
    }
    return 0;
}