# include <bits/stdc++.h>
using namespace std;

long long  nC2(long long n){
    if(n % 2 == 0){
        return (n/2)*(n - 1);
    }
    return ((n-1)/2)*n;
}

int main() {
    long long n, m;
    cin >> n >> m;

    long long k = n / m;
    long long alpha = n % m;
    long long beta = m - alpha;

    long long m1 = nC2(n - m  +1);
    long long m2 = alpha*nC2(k+1) + beta*nC2(k);

    cout <<min(m1, m2) <<" "<< max(m1, m2);
    return 0;
}