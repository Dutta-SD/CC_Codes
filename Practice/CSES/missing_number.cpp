# include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll s = ((ll)n*(n+1)) / 2;
    for(int i = 0; i < n-1; ++i){
        int l;
        cin >> l;
        s -= l;
    }
    cout << s;
    return 0;
}