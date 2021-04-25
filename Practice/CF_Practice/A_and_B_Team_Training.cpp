# include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    if(n >= m * 2){
        cout << m;
    } 
    else if(m >= n * 2){
        cout << n;
    }
    else {
        cout << (n + m) / 3;
    }

    return 0;
}