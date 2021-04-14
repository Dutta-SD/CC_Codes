# include <bits/stdc++.h>
using namespace std;
using ll =  unsigned long long;

int main() {
    ll n, m;
    cin >> n >> m;

    vector < pair<ll, ll> > adj [n+1];

    for(ll i = 0; i < m; ++i){
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }


    // default version
    // also can use set<pair<ll, ll>> for min priority queue
    priority_queue<pair<ll, ll>> q;

    vector <ll> distance (n + 1, INTMAX_MAX);
    vector <bool> processed (n + 1, false);

    ll x = 1; // Source

    distance[x] = 0;
    q.push({0, x});

    while(!q.empty()) {
        // Get next edge with min weight
        ll a = q.top().second;
        q.pop();

        // If unvisited, then only go forward
        if (processed[a]) continue;
        processed[a] = true;

        // While there are nodes to be processed
        for (auto u : adj[a]) {
            // relaxation
            ll b = u.first, w = u.second;
            if (distance[a] + w < distance[b]) {
                distance[b] = distance[a] + w;
                q.push({-distance[b], b});
            }
        }
    }

    for(ll i = 1; i < n + 1; ++i){
        cout << distance[i] << " ";
    }

    return 0;
}