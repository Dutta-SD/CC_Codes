# include <bits/stdc++.h>
using namespace std;

/*
=====================================================
Permutation Generation Logic
=====================================================
When we are asked to enumerate permutations
we do normally as humans

Fix one element at the beginning, Then generate 
all permutations with that element fixed.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
If all elements are fixed, then it is a single 
permutation of the string. Else ,swap a character 
from the string, taking it to be fixed

{
    Swapping is equivalent to selecting one element
    from the set of all unfixed characters in the 
    string and then permuting the rest.
}
*/

// Create a global set to store all the strings.
// This generates unique permutations only
// Unordered set is faster than ordered set
// set-container where all elements are unique

set <string> v;

void permutation(string s, int left, int right){
    // Base Case - When all elements are fixed,
    // we have reached
    // a permutation
    if(left == right) v.insert(s);
    else {
        for(int i = left; i < right; ++i){
            // Take one element fixed
            swap(s[i], s[left]);
            // Generate all permutations with remaining characters
            permutation(s, left + 1, right);
            // when we swapped a character, we went down perm tree
            // to go back to the node, we swap it back
            swap(s[left], s[i]);
        }
    }
}

int main() {
    string s;
    cin >> s;
    permutation(s, 0, s.size());
    cout << v.size() << "\n";
    for(auto i : v){
        cout << i << "\n";
    }
    return 0;
}