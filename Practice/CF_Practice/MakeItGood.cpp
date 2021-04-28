# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i) cin >> arr[i];

    //LOGIC
    int pos = n - 1;
    while(pos > 0 && arr[pos] <= arr[pos - 1]) --pos;
    if(pos == 0) {
        cout << 0 <<"\n";
        return;
    }
    --pos;
    while(pos > 0 && arr[pos] >= arr[pos - 1]) --pos;

    cout << pos <<"\n";
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}