# include <cstdio>
# include <cmath>
# include <algorithm>
using namespace std;

int main(){
    int a, b, h, m;
    scanf("%d %d %d %d", &a, &b, &h, &m);
    h = h * 30; // degree
    m = m * 6;  
    double deg = min(abs(h-m), 360 - abs(h-m));
    printf("%lf\n", deg);

    double deg_diff = (deg / 180.0) * M_PI;
    
    double length = sqrt(a*a + b*b - 2*a*b*cos(deg_diff));
    printf("%0.9lf", length);
    return 0;
}