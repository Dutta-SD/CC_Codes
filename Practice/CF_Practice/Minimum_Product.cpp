# include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a, b, x, y, n;
    long long product = 1;
    cin >> a >> b >> x >> y >> n;
    // n  > a - x  +b - y
    if( n  >= a - x  + b - y){
        cout <<"\t" << x * y <<"\n";
        return;
    }
    if (a == b){
        if (x < y){
            if(n > b - y){
                b = y;
                a -= n - (b - y);
                cout <<"\t" << a * b <<"\n";
                return;
            }
            b = b - n;
            a = a;
            cout <<"\t" << a * b <<"\n";
            return;
        } else {
            if(n > a - x){
                a = x;
                b -= n - (a - x);
                cout <<"\t" << a * b <<"\n";
                return;
            }
            a = a - n;
            b = b;
            cout <<"\t" << a * b <<"\n";
            return;

        }
    }

    // Reduce min element
    auto min_num = min(a, b);
    if(min_num == a){
        if(n > a - x){
            a = x;
            b -= n - (a - x);
            cout <<"\t" << a * b <<"\n";
            return;
        }
        a = a - n;
        b = b;
        cout <<"\t" << a * b <<"\n";
        return;
    } else {
        if(n > b - y){
            b = y;
            a -= n - (b - y);
            cout <<"\t" << a * b <<"\n";
            return;
        }
        b = b - n;
        a = a;
        cout <<"\t" << a * b <<"\n";
        return;
    }

    cout <<"\t" << a * b << "\n";
}

int main() {
    freopen("output.txt", "w+", stdout);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}