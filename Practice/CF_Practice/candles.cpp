# include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    long hours = a, candles = 0, stubs = a;
    while(stubs >= b){
        int t = stubs % b;
        candles = stubs / b;
        hours += candles;
        stubs = candles + t;      
    }
    cout << hours;
    return 0;
}