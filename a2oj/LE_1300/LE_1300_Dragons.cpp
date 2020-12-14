# include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return (p1.first > p2.first);
}

int main() {
    int strength;
    int numDragons;
    cin >> strength >> numDragons;
    vector < pair<int, int> > v;
    int drag_strength, life_added;
    
    for(int i = 0 ; i < numDragons; ++i){
        cin >> drag_strength >> life_added;
        v.push_back({drag_strength, life_added});
    }

    sort(v.begin(), v.end());

    bool canDefeat = true;
    for(auto i : v) {
        // Not defeat
        if(i.first >= strength){
            canDefeat = false;
            break;
        }
        // Defeat
        strength += i.second;
    }

    cout << (canDefeat ? "YES" : "NO");
    return 0;
}