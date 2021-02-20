# include <bits/stdc++.h>
using namespace std;

# define N 4
# define print(v) {for(auto i : v) cout << i <<" "; cout << "\n";}

//Adjaceny List - each node has a adjacency list
vector <int> v [N];
bool visited [N] {false};
// OR
// vector < vector<int> > adj (N);

void dfs(int node){
    if(visited[node]) return;
    visited [node] = true;

    // Process node, node == 3 hardcoded version
    if (node == 3) cout <<"Reached node " << node <<"\n";
    else cout << "*****\n";

    for(auto nxt_node : v[node]){
        dfs(nxt_node);
    }
}

int main(){
    v[0].emplace_back(3);

    v[1].emplace_back(3);
    v[1].emplace_back(2);

    v[2].emplace_back(1);

    v[3].emplace_back(1);
    v[3].emplace_back(2);
    v[3].emplace_back(0);

    dfs(0);
    memset(visited, N * sizeof(bool), false);
    // dfs(1);
    // dfs(2);
    // dfs(3);

    return 0;   
}