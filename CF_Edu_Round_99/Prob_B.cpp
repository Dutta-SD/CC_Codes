# include <iostream>
# include <cstdlib>
using namespace std;

int main() {
    long t, dest;
    cin >> t;
    long jump_count = 0, cur_pos = 0;
    while(t--){
        cin >> dest;
        while(cur_pos < dest){
            ++jump_count;
            cur_pos += jump_count;
        }

        cout << "\t" << jump_count + (cur_pos - dest) << "\n";
    }
    return 0;
}