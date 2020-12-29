# include <iostream>
# include <cmath>
using namespace std;
typedef long long unsigned llu;

int main() {
    llu n, m, a;
    cin >> n >> m >> a;
    cout << (llu)ceil((double)n/a) * (llu)ceil((double)m/a);
    return 0;
}