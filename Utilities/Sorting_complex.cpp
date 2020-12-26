# include <bits/stdc++.h>
# define print_pair(arr) {for(auto i : arr){cout << i.first << ","<< i.second<<" ";} cout << "\n";}
# define print_tuple(arr) {for(auto i : arr){cout << get<0>(i) << ","<< get<1>(i)<<","<<get<2>(i) << " ";} cout << "\n";}
using namespace std;

int main() {
    // pair sorts first by first element
    // then by second
    vector < pair<int, int> > v;
    v.push_back({1, 5});
    v.push_back({2,3});
    v.push_back({1,10});
    v.push_back({2,4});
    sort(v.begin(), v.end());
    print_pair(v);

    vector < tuple<int, int, int> > v2;
    v2.push_back({1, 2, 3});
    v2.push_back({2, 3, 1});
    v2.push_back({3, 1, 2});
    sort(v2.begin(), v2.end());
    print_tuple(v2);
    return 0;

}