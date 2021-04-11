# include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    vector <long long> a(n);
    vector<long long> b(n);
    vector<long long> c(n, -1);

    for(auto &i : a){
        cin >> i;
    }

    for(auto &i : b){
        cin >> i;
    }

    long long i, j;
    long long max_num = -1;

    for(long k = 0; k < n ; ++k){
        for (i = k; i <= k; ++i){
            for (j = i; j <= k; ++j){
               
                max_num = max(max_num, (long long)a[i]*b[j]);
            }
            if(k == 0){
                c[k] = max_num;
            } else {
                c[k] = max(c[k-1], max_num);
            }
        }
    }

    for(auto &i : c){
        cout << i <<"\n";
    }

    return 0;
}