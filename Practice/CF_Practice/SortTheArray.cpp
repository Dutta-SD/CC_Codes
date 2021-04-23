# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    if(is_sorted(a, a + n)){
        cout << "yes\n";
        cout << 1 <<" "<<1;
        return 0;
    }

    int start{0}, end{n - 1};

    while(start <= end  && a[start] < a[start + 1]){
        ++start;
    }

    while(start <= end  && a[end] > a[end - 1]){
        --end;
    }

    // cout << "\n\n\n" << start << " "<<end <<"\n";

    reverse(a + start, a + end + 1);

    // for(int i = 0; i < n; ++i){
    //     cout << "\nE : " << a[i];
    // }

    if(is_sorted(a, a + n)){
        cout << "yes\n";
        cout << start + 1 <<" "<<end + 1;
    } else {
        cout << "no\n";
    }
}