# include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    
    // -------------------------INPUT---------------------------- 
    cin >> n;
    vector <int> boys(n);
    for(auto &i : boys){
        cin >> i;
    }

    boys.emplace_back(INT_MAX);

    cin >> m;
    vector <int> girls(m);
    for(auto &i : girls){
        cin >> i;
    }

    girls.emplace_back(INT_MAX);


    //------------------------------MAIN PROGRAM---------------------------
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int i = 0, j = 0, pairs = 0;

    while(i <= n && j <= m &&(boys[i] != INT_MAX && girls[j] != INT_MAX)){


        if (abs(boys[i] - girls[j]) <= 1) {++pairs; i++; j++;}
        else if (abs(boys[i+1] - girls[j]) < abs(girls[j+1] - boys[i])) i++;
        else j++;
    }

    cout << pairs;
    return 0;
}