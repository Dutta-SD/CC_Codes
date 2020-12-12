# include <iostream>
# include <string>
using namespace std;

int main(){
    string guest_name;
    string host_name;
    string permutation;
    cin >> guest_name;
    cin >> host_name;
    cin >> permutation;
    int char_counts[512] {0};
    for(auto i : permutation){
        char_counts[i]++;
    }
    for(auto i : guest_name) {
        char_counts[i]--;
    }
    for (auto i : host_name) {
        char_counts[i]--;
    }
    bool flag = true;
    for (auto i : char_counts){
        if (i){
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
    return 0;    
}