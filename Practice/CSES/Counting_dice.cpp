#include <bits/stdc++.h>
using namespace std;
# define MOD (1000000000 + 7)

int main(){
    long n;
    cin >> n;
    vector <long> v(n+1, 0);

    v[0] = 1;

    for(long i = 1; i <= n; ++i){
        for(long j = i; j >= i-6; --j){
            if(j >= 0){
                v[i] =(v[i]%MOD+v[j]%MOD) % MOD;
            }
        }
    }

    cout << v[n];
    return 0;
}