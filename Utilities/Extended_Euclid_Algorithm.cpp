// Extended Euclid Algorithm to calculate Bezout coefficients
# include <bits/stdc++.h>
using namespace std;

int extendedEuclid(int a, int b, int& x, int& y){
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int d = extendedEuclid(b, a%b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}


int main() {
    int x, y;
    int gcd = extendedEuclid(23, 33, x, y);
    cout << gcd << " " << x << " " << y << endl;
    cout << x*23 + y*33 << endl;
    return 0;
}