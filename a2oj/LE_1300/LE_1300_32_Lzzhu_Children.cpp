# include <iostream>
# include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int candies[n];

    for(int i = 0; i < n; ++i){
        cin >> candies[i];
    }

    int pos = n, max_candies = -1;

    for(int i = n-1; i > -1; --i){
        if(ceil(candies[i]/(1.0*m)) > max_candies){
            max_candies = ceil(candies[i]/(1.0*m));
            pos = i+1;
        }
    }

    cout << pos <<endl;
    return 0;
}