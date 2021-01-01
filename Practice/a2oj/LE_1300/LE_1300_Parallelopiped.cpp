# include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
    ll lb, bh, lh;
    scanf("%lld %lld %lld", &lb, &bh, &lh);
    ll result_2 = lb * bh * lh;
    ll result = sqrtl(result_2);
    ll perimeter = 4 * (result / lb + result / bh + result / lh);
    printf("%lld\n", perimeter);
    return 0;
}