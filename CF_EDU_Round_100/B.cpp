#include <bits/stdc++.h>
using namespace std;

int nearest_multiple(int a, int b){
    // a / b
    int c = a / b;
    if((c * b - a) < ((c+1) * b - a)){
        return (c*b-a);
    }else{
        return ((c+1)*b-a);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num[n];
        int min_arr[n];
        for(int i = 0; i < n; ++i){
            cin >> num[i];
            if(i == 0){
                min_arr[i] = num[i];
            }else{
                min_arr[i] = nearest_multiple(num[i], min_arr[i-1]);
            }
        }

        for(int i = 0; i < n; ++i){
            cout << min_arr[i] <<" ";
        }
        cout << "\n";
    }
    return 0;
}