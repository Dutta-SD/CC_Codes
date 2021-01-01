# include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--){
        ll final_pos;
        cin >> final_pos;
        ll i;
        for(i = 1; i*(i+1) < 2*final_pos; ++i);
        if(i*(i+1) / 2 - final_pos == 1){
            cout << i+1 <<"\n";
        }
        else{
            cout << i <<"\n";
        }        
    }
    return 0;
}