# include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    int array[n] {-1, 1, 0, 0, 2, 3, 4, 8, 9, 11};

    // If element is in sorted array
    auto k = lower_bound(array, array+n, 3) - array;
    if (k < n && array[k] == 3) {
        cout << "Found!\n" << "\n";
    }
    // Number of elements of a type
    auto r = equal_range(array,array+n, 3);
    cout << r.second - r.first << "\n";
    return 0;
}