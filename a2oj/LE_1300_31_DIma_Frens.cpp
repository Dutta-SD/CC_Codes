# include <iostream>
using namespace std;

int main() {
    int numFrens;
    int ways = 0;
    int sumFingers = 0;
    int temp;
    cin >> numFrens;
    for(int i = 0; i < numFrens; ++i){
        cin >> temp;
        sumFingers += temp;
    }
    for(int i = 1; i < 6; ++i){
        if((sumFingers + i) % (numFrens + 1) == 1){
            ways++;
        }
    }

    cout << 5 - ways << endl;
    return 0;
}