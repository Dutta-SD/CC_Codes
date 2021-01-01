# include <bits/stdc++.h>
using namespace std;
// Modern way of defining things
// instead of typedef
using ll = long long unsigned;


int main() {
    multiset<int> s;
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    cout << s.count(3) <<"\n";
    // Can multiset work as counter in python?
    s.erase(3);
    // erase all instances
    s.insert(5);
    // Delete the first instance
    s.erase(s.find(5));
    cout << s.count(5);

    return 0;
}
