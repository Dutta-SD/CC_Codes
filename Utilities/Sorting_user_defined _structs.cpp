# include <bits/stdc++.h>
# define print_struct(arr) {for(auto i : arr){cout << i.x << ","<< i.y<<" ";} cout << "\n";}

using namespace std;

struct point{
    int x;
    int y;
    // data points
    // operator called with reference to left struct
    bool operator<(const point &p){
        // basics of operator overloading
        // Define comaprison for different objects
        // funtion inside struct
        // we behave as if x, y for this struct is 
        //  defined
        if(x != p.x) return x < p.x;
        return y < p.y;
    }
};


int main(){
    vector < point > v;
    point p;
    v.push_back({1, 2});
    v.push_back({1, 3});
    sort(v.begin(), v.end());
    print_struct(v);    
    return 0;
}