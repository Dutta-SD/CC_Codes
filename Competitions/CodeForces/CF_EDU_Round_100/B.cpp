#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> num[i];
            if (i & 1)
            {
                num[i] = 1;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << num[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}