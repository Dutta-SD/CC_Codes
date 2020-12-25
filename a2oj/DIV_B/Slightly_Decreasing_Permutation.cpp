#include <bits/stdc++.h>
# define print(arr) for(auto i : arr){cout << i <<" ";}
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int perm[n];

    for (int i = 0; i < n; ++i)
    {
        perm[i] = n-i;
    }
    // print(perm)

    for (int i = 0; i < n-k-1; ++i)
    {
        for (int j = 1; j < n - i; ++j)
        {
            swap(perm[j], perm[j - 1]);
        }
    }

    print(perm);   

    return 0;
}