// RMQ using sparse table
// O(1) answer of queries

# include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector <int> input(n);
    for(auto &i : input){
        cin >> i;
    }

    int col = log2(n) + 1;


    vector < vector<int> > sparse (n, vector <int> (col));

    // build sparse table
    for(int i = 0; i < n; ++i){
        sparse[i][0] = i;
    }

    // sparse table
    // 1 << j  === 2 ^ j
     for (int j = 1; 1 << j <= n; j++) {
        for (int i = 0; i + (1 << j) - 1 < n; i++) {
            if (input[sparse[i][j - 1]] < input[sparse[i + (1 << (j - 1))][j - 1]]) {
                sparse[i][j] = sparse[i][j - 1];
            } else {
                sparse[i][j] = sparse[i + (1 << (j - 1))][j - 1];
            }
        }
    }

    while(q--){
        int high, low;
        cin >> low >> high;
        --high;
        --low;

        int l = high - low + 1;
        int k = log2(l);

        // cout << "\tk is " << k <<"\n\n";

        if (input[sparse[low][k]] <= input[sparse[low + l - (1<<k)][k]]) {
            cout << input[sparse[low][k]] << "\n";
        } else {
            cout << input[sparse[high - (1<<k) + 1][k]] <<"\n";
       }
    }

    return 0;
}