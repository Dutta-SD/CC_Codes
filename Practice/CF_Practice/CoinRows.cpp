#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m;
    cin >> m;
    vector<vector<int>> mat(2, vector<int>(m));

    int sum_top{0}, sum_bottom{0};
    int bob_score = INT32_MAX;

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < m; ++i)
        sum_top += mat[0][i];

    for (int j = 0; j < m; ++j)
    {
        sum_top -= mat[0][j];
        bob_score = min(bob_score, max(sum_top, sum_bottom));
        sum_bottom += mat[1][j];
    }

    cout << bob_score << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}