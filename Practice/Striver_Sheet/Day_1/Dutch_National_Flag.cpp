// DNF-Striver
# include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 20;
    int arr[] = {0 ,0, 0, 1, 2, 2, 1, 0, 0, 2, 2, 1, 0, 0, 2, 1, 2, 1, 0, 2};
    int low = 0;
    int mid = 0;
    int high = n - 1;


    while(mid <= high){
        // Single Pass clustering
        switch(arr[mid]){
            case 0:
            // mid = 0
            swap(arr[low++], arr[mid++]);
            break;

            case 1:
            // mid == 1
            mid++;
            break;

            case 2:
            // mid == 2
            swap(arr[mid], arr[high--]);
            break;
        }
    }

    for(int i = 0; i < n; ++i){
        cout << arr[i] <<" ";
    }

    return 0;
}