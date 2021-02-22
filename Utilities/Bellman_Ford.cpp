// Implementation of Bellman Ford Algorithm for edge list representation
# include <bits/stdc++.h>
# define N 5
using namespace std;

int main() {
    // Edge list as (source_node, dest_node, weight)
    // -----------------------------------------------
    vector < tuple <int, int, int> > edges;
    edges.push_back({1,2,5});
    edges.push_back({2,3,7});
    edges.push_back({2,4,6});
    edges.push_back({3,4,5});
    edges.push_back({4,1,2});
    // -----------------------------------------------

    int source = 1;

    vector <int> distance (N); // Distance of all edges. 

    // Assign Infinity distance to vector
    distance.assign(N, INT_MAX);
    distance[source] = 0;

    for(int i = 0; i <= N-1; i++){
        for(auto e : edges){
            int a, b, w;
            tie(a, b, w) = e;
            distance[b] = min(distance[b], distance[a] + w);
        }
    }

    for(int i = 0; i <= N-1; ++i){
        cout <<"source "<< source << " to destination "<< i << " is "<<distance[i]<<"\n";
    }

    return 0;
}