#include <bits/stdc++.h>
using namespace std;
# define print(arr) {for(auto &i:arr){cout << i <<"\t";}cout << "\n";}

int main()
{
    string s;
    int t, l, r;
    cin >> s;
    vector<int> v(s.size(), 0);
    vector <int> sum(s.size() + 3, 0);
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            v[i] = 1;
        }
    }
    // print(v);
    partial_sum(v.begin(), v.end(), sum.begin() + 1);
    // print(sum);
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        cout << sum.at(r-1) - sum.at(l-1) << "\n";
    }
    return 0;
}