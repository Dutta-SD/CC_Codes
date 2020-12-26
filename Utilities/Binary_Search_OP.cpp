# include <bits/stdc++.h>
using namespace std;

bool binary_op(int x, int arr[], int n){
    // find x in array
    // arr - sorted array
    // n - size of array
    int k = 0; // Start from left
    for(int b = n/2; b >= 1; b/= 2){
        // Starts from left
        // till not get jump lesser than
        // max pow of 2, stay at left end
        //  jump shortens by 2 every for iteration
        while(k+b < n && arr[k+b] <= x){
            k += b;
        }
    }
    if(arr[k] == x){
        return true;
    }
    return false;   
}

int main() {
    int arr[10] {1,2,3,4,5,6,7,8,9,11};
    int x = 2;
    int n = 10;
    cout << binary_op(x, arr, n);
    return 0;
}