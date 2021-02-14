# include <bits/stdc++.h>
using namespace std;

int isEdge(const vector < vector<char> > & m, int x, int y){
    int numHash = 0;

    vector <int> v {m[x][y], m[x+1][y], m[x][y+1], m[x+1][y+1]};

    for(auto i : v){
        if(i == '#') numHash++;
    }
    if(numHash == 1)
        return 1;
    return 0;    
}

int main(){
    int h, w;
    cin >> h >> w;
    int numEdges = 0;
    vector< vector<char> > m (h, vector<char> (w, '.'));

    for(int i = 0; i < h-1; ++i){
        for(int j = 0; j < w-1; ++j){
            cin >> m[i][j];
        }
    }
    for(int i = 0; i < h-1; ++i){
        for(int j = 0; j < w-1; ++j){
            numEdges += isEdge(m, i, j);
        }
    }
    cout << numEdges;
    return 0;
}