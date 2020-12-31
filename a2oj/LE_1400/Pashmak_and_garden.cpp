# include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, y1, y2;
    int len;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 == x2){
        // Same vertical line
        len = abs(y1 - y2);
        cout << x1+len << " " << y1 << " " << x2+len << " " << y2 ;
    }
    else if (y1 == y2){
        // same horizontal line
        len = abs(x1 - x2);
        cout << x1 << " " << y1 + len << " " << x2 << " " << y2 + len ;
    }
    else if (abs(x1-x2) == abs(y1-y2)) {
        cout << x2 << " " << y1 << " " << x1 << " " << y2 ;
    }
    else {
        cout << -1 ;
    }
    return 0;
}