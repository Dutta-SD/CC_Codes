# include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int compared_result = strcasecmp(s1.c_str(), s2.c_str());
    cout << (compared_result ? compared_result / abs(compared_result) : 0);
    return 0;
}