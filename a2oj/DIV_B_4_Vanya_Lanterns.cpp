# include <bits/stdc++.h>
using namespace std;


int main() {
    long num_lanterns, length;
    cin >> num_lanterns >> length;

    vector <long> lanterns (num_lanterns, 0);

    for(auto i = 0; i < num_lanterns; ++i){
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());

    long res = 2 * max(lanterns[0], length - lanterns[num_lanterns - 1]);

    for (long i = 0; i < num_lanterns-1; ++i){
        res = max(res, lanterns.at(i+1) - lanterns.at(i));              
    }

    cout << setprecision(10) << res / 2.0 << endl;
    return 0;    
}