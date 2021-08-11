# include <iostream>
# include <unordered_set>
using namespace std;

bool subArrayZeroSum(int arr[], int n){

    unordered_set <int> prev_sums;

    int sum = 0;

    for(int i = 0; i < n; ++i){
        sum += arr[i];
        if (!sum || prev_sums.find(sum) != prev_sums.end()) return true;
        prev_sums.insert(sum);
    }

    return false;
}

int main(){
    int arr[] = {-1, -2, 3, 1, 3, 2};
    cout << subArrayZeroSum(arr, sizeof(arr) / sizeof(int));
    return 0;
}