# include <bits/stdc++.h>
using namespace std;

int main(){
    long a, b, c;
    cin >> a >> b >> c;
    long long s = (a + b + c) / 2;
    if(s*2 != a+b+c){
        cout << "Impossible";
        return 0;
    }
    a = s - a;
    b = s - b;
    c = s - c;
    if(a < 0 || b < 0 || c < 0 || (a == 0 && b == 0 && c == 0)){
        cout << "Impossible";
        return 0;
    }
    cout << c << " " << a <<" " << b;
    return 0;
}