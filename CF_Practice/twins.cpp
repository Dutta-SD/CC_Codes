# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n, 0);
    int sum = 0;
    for(int i = 0; i < n; ++i){ 
        cin >> v[i];
        sum += v[i];
    }
    int count = 0;
    int sum_left = 0;
    sort(v.rbegin(), v.rend());
    for(int i = 0; i < n; ++i){
        ++count;
        sum_left += v[i];
        sum -= v[i];
        if(sum_left > sum){
            break;
        }
    }
    cout << count ;
    return 0;
}