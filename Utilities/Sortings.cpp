# include <bits/stdc++.h>
# define print(arr) {for(auto i : arr){cout << i <<" ";} cout << "\n";}
using namespace std;

int main() {
    // Sorting using inbuilt method
    vector <int> v{2, 1, 0, 3, 4, 5, 8, -1, 3};
    int arr[9] = {2, 1, 0, 3, 4, 5, 8, -1, 3};
    // print(v);
    // Normal ascending sorting
    sort(v.begin(), v.end());
    print(v);
    // Descending sorting
    sort(v.rbegin(), v.rend());
    print(v);
    //sort normal array
    sort(arr, arr+9);
    print(arr);
    return 0;
}