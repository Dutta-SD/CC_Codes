# include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, x, y, a, b;
    int min_amt = INT_MAX;
    cin >> n >> m >> a >> b;
    for(x = 0; x <= n; ++x){
        for(y = 0; y <= n; ++y){
            if ( x + y*m < n &&((x == 0) && (y== 0)) ) continue;
            if(a*x + b*y < min_amt) min_amt = a*x  +b*y;
        }
    }
    cout << min_amt;
    return 0;
}