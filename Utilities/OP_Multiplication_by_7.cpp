# include <bits/stdc++.h>
using namespace std;
// GFG
// OPOPOPOPOPOPOPOPOPOPOOPOPOPOPOPOPO
long multiplyBy7Fast(long num){
    // num << 3 = 8*num
    // 8*num - num = 7*n
    return ((num << 3) - num);
}

int main(){
    cout << multiplyBy7Fast(10)<<"\n";
    cout << multiplyBy7Fast(19)<<"\n";
    cout << multiplyBy7Fast(2000)<<"\n";
    cout << multiplyBy7Fast(30)<<"\n";
    cout << multiplyBy7Fast(66)<<"\n";
    cout << multiplyBy7Fast(72)<<"\n";
    cout << multiplyBy7Fast(12)<<"\n";    
}