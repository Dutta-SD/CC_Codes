# include <bits/stdc++.h>
using namespace std;

int main() {
    // Set data structure
    // Ordered set - operations in O(log n)
    // --> Balanced tree 
    // Unordered set - Operations in O(1)
    // --> Hashing
    set <int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    // for ordered set, count is always 1 or 0
    // count 1 - in set, else not in set
    cout << s.count(3) <<"\n";
    cout << s.count(1) << "\n";
    // Remove - s.erase(element)
    s.erase(3);
    cout << s.count(3) <<"\n";
    return 0;
}