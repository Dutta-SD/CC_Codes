# include <iostream>
# include <vector>
using namespace std;



int main() {
    int num;
    cin >> num;
    vector <int> vec (7, 0);
    for(int i = 0; i < 7; ++i){
        cin >> vec[i];
    }
    int counter = 0;

    while(true){
        num -= vec.at(counter % 7);
        ++counter;
        if (num <= 0) break;
    }
    
    cout << (counter % 7 ? counter % 7 : 7) << "\n";
    return 0;
}