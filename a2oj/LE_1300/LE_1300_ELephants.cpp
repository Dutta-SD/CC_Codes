# include <bits/stdc++.h>
using namespace std;

int main() {
    map <int, int> mp;
    int n;
    int arr[100000 + 10];
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        if(mp.find(arr[i]) != mp.end()){
            mp[arr[i]] += 1;
        }
        else {
            mp.insert({arr[i], 1});
        }    
    }

    if(mp.begin()->second > 1){
        cout << "Still Rozdil";
    }
    else {
        for(int i = 0; i < n; ++i){
            if(mp.begin()->first == arr[i]){
                cout << i+1;
            }
        }
    }

    return 0;
}