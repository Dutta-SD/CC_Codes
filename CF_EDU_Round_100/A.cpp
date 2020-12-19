/*
Note that for every 7 shots, we deal a total of 9 units of damage. 
Since we want to kill all the monsters with a shot which index is divisible by 7, 
let's denote the number of shots as 7k. In this case, a total of a+b+c units of damage must be dealt, 
hence k=a+b+c / 9 (if the result of the division is not an integer, then there is no answer).

Since each monster will receive at least k units of damage (with enhanced shots), 
the health of each monster must be at least k. If the two conditions described above are met, 
then the remaining shots can always be distributed in the desired way.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, k;
        cin >> a >> b >> c;

        if ((a + b + c) % 9 == 0)
        {
            k = (a + b + c) / 9;

            if (a >= k && b >= k && c >= k)
            {
                cout << "YES\n";
                continue;
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}