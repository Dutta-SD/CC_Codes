# include <bits/stdc++.h>
using namespace std;
// From GFG
bool isMultipleof3(long number){
    // Multiple of 3 if number of even set bits
    // and odd set bits is multiple of 3
    // Base Case
    number = abs(number);
    // Base Case
    if (number == 1) return false;
    if (number == 0) return true;
    long odd_set_count = 0, even_set_count = 0;
    while (number != 0){
        if(number & 1){
            // Rightmost bit is set
            odd_set_count ++;
        }
        if (number & 2){
            even_set_count++;
        }
        number >>= 2;
    }
    return isMultipleof3(odd_set_count - even_set_count);
}

int main() {
    cout << isMultipleof3(33) <<"\n";
    
    
    cout << isMultipleof3(34) <<"\n";


    return 0;
}