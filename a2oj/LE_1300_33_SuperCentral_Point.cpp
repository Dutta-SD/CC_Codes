# include <iostream>
using namespace std;

struct point{
    int x;
    int y;
};

bool isNeighbour(point p1, point p2) {
    // Manhattan Distance
    return (p1.x == p2.x && p1.y != p2.y) || (p2.y == p1.y && p1.x != p2.x);
}

int main(){
    int t;
    cin >> t;

    point arr[t];
    for(int i = 0; i < t; ++i) {
        cin >> arr[i].x >> arr[i].y;
    }

    int count {0};
    int num_points {0};
    for(int i = 0; i < t; ++i){
        for(int j = 0; j < t; ++j){
            if (i == j) continue;
            // cout << dist(arr[i], arr[j]) <<endl;
            if(isNeighbour(arr[i], arr[j])) count++;
        }
        // cout << "\t";

        if(count >= 4) num_points++;
        count = 0;
    }

    cout << num_points <<endl;
    return 0;
}
   