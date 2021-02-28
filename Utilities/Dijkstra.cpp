# include <bits/stdc++.h>
# define N 5
using namespace std;

// adj[a] = (b, w), end, weight
vector <pair<int, int>> adj [N];

// usually, nodes ae named from 1 here

void init(){
    adj[1].push_back({2,5});
    adj[2].push_back({3,7});
    adj[2].push_back({4,6});
    adj[3].push_back({4,5});
    adj[4].push_back({1,2});
}


int main() {

    // init the graph
    init();

    // default version
    priority_queue<pair<int, int>> q;
    vector <int> distance (N, INT_MAX);
    vector <bool> processed (N, false);
    int x = 1; // Source

    distance[x] = 0;
    q.push({0, x});

    while(!q.empty()) {
        // Get next edge with min weight
        int a = q.top().second;
        q.pop();

        // If unvisited, then only go forward
        if (processed[a]) continue;
        processed[a] = true;

        // While there are nodes to be processed
        for (auto u : adj[a]) {
            // relaxation
            int b = u.first, w = u.second;
            if (distance[a] + w < distance[b]) {
                distance[b] = distance[a] + w;
                q.push({-distance[b], b});
            }
        }
    }

    int count = 1;
    for(auto u : distance){
        cout << "Distance from " << x << " to " << count << " is " <<distance[count++] <<endl;
    }

    return 0;
}