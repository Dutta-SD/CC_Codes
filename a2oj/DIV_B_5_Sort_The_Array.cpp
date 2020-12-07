# include <bits/stdc++.h>
using namespace std;

int main() {
    int  n;
    cin >> n;

    vector <int> vec (n+2, 0);
    vec.at(n+1) = INT_MAX;


    for(int i = 1; i < n + 1; ++i){
        cin >> vec[i];
    }

    int start=0, end=0;
    bool flag = true;

    for(int i = 0; i < n + 1; ++i){

        int j = i;
        start = end = i;
        if(vec.at(i) > vec.at(i+1)) {
            // Possible decreasing sequence           

            for(j = i; j < n+1 ; ++j){

                if(vec.at(j) > vec.at(j+1)) ++end;
                else {
                    // Starts increasing, but cannot reverse
                    if(vec.at(start) > vec.at(j+1)){
                        flag = false;
                        break;
                    }
                }
                
            }
        }
        if (!flag) break;
        i = j;
    }

    if (!flag){
        cout << "no\n";
    } else {
        cout << "yes\n" << start << " " << end <<"\n";
    }

    return 0;    
}