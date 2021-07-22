# include <bits/stdc++.h>
using namespace std;

/*
    :param nums : Vector whose LIS is needed
    :param idxs : <!!Empty Vector!!>, fill with indexes

    :return : length of the LIS
*/
int lis_length_and_idxs(const vector <int>& nums, vector <int>& idxs){    

   if (nums.size() == 0) return 0;

    // At least one character part of lis, so init as 1
   vector <int> lis_temp (nums.size(), 1);

   int lis_length = 0;

    // Lis calculation table
   for(int i = 0; i < nums.size(); ++i){
       for(int j = 0; j < i; ++j){
           if(nums[j] < nums[i]){
                // Possible lis candidate, 1 more than size of previous
                lis_temp[i] = max(lis_temp[i], lis_temp[j] + 1);
           }
       }
       // Calculate running Maximum
       lis_length = max(lis_length, lis_temp[i]);       
   }

   // Get indexes
    int temp = lis_length;
    for(int i = nums.size() - 1; i >= 0; --i){
        if(temp == lis_temp[i]){
            idxs.push_back(i);
            --temp;
        }
    }
    reverse(idxs.begin(), idxs.end());

    return lis_length;
}

int main(){
    vector<int> arr {2, -1, 3, 4, -2, 0, 8, 2, 1, 7};
    vector<int> idxs;
    cout << lis_length_and_idxs(arr, idxs) << endl;
    for(auto i : idxs) cout << i << '\t';
    return 0;
}