# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long i, j;
    cin >> i >> j;
    for(long t = i; t <= j; ++t){
        if(isPrime(t)) cout << t <<"\n";

    }

}