# include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum=0, r_sum=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    for(int i = n-1; i > -1; i--) {
        r_sum += arr[i];
        if(r_sum > sum/2) {
            cout << n-i << endl;
            break;
        }
    }
    return 0;
}