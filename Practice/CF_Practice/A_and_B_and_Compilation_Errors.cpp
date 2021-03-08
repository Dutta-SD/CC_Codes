# include <bits/stdc++.h>
using namespace std;

int main(){
    long a{0}, b{0}, c{0}, temp, n;
    
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> temp;
        a += temp;
    }
    for(int i = 0; i < n-1; ++i){
        cin >> temp;
        b += temp;
    }
    for(int i = 0; i < n-2; ++i){
        cin >> temp;
        c += temp;
    }
    cout << a - b <<"\n";
    cout << b - c << "\n";

    return 0;  
}