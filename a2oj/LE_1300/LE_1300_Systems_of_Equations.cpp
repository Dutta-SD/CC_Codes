# include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int count = 0;

    int lim = max(n, m);

    for(int a = 0; a <= lim; ++a){
        for(int b = 0; b <= lim; ++b){
            if(a*a + b == n && b*b + a == m) ++count;
        }
    }
    cout << count;
    return 0;
}