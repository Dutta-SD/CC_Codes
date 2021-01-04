# include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    // lldiv_t p;
    cin >> n;
    long long count = 0;
    for(int a = 1; a < n; a++){
        count += (n-1) / a;
    }
    cout << count;
    return 0;
}