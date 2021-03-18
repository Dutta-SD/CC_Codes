# include <bits/stdc++.h>
using namespace std;

int main(){
    long n, x;
    cin >> n >> x;

    long count = 0;

    for (long i = 1; i <= n; ++i){
        if(x % i == 0 && x / i <= n){
            count ++;
        }
    }

    cout << count;
    return 0;
}