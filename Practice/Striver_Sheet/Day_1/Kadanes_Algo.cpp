# include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {4, -1, -2, 3, 1, 0};

    int max_overall_sum = 0;
    int max_sum_ending_at_pos = 0;

    for(int i = 0; i < 6; ++i){
        max_sum_ending_at_pos = max(max_sum_ending_at_pos + arr[i], arr[i]);
        max_overall_sum = max(max_overall_sum, max_sum_ending_at_pos);
    }

    cout << max_overall_sum <<"\n";
    return 0;
}