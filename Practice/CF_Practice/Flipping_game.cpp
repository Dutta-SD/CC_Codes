# include <bits/stdc++.h>
using namespace std;

int main(){
    int n, temp, numOnes{0};
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> temp;
        if(temp) {v[i] = -1; numOnes++;}
        else v[i] = 1;
    }

    if(numOnes == n){
        cout << n-1;
        return 0;
    }

    int best = 0, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(v[k],sum+v[k]);
        best = max(best,sum);
    }

    cout << best + numOnes << "\n";    
    return 0;
}