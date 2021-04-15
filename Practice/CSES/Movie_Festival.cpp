# include <bits/stdc++.h>
# pragma GCC optimize("Ofast")
# pragma GCC target("avx,avx2,fma")
// # define DEBUG 1

# define vec_pair_print(vec) {for(auto i : vec){cout << i.first <<" "<<i.second <<"\t";}cout << "\n";}
using namespace std;

bool compare (const pair <long, long> & movie1, const pair <long, long> & movie2){
    return movie1.second < movie2.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <pair <long, long> > movies;
    int nMovies, movieStart, movieEnd;
    cin >> nMovies;
    while(nMovies--){
        cin >> movieStart >> movieEnd;
        movies.push_back({movieStart, movieEnd});       
    }

    long counts {1};
    sort(movies.begin(), movies.end(), compare);

    #ifdef DEBUG
        vec_pair_print(movies);
    #endif


    long lastMovieEnd = movies.begin() -> second;

    for(size_t i = 1; i < movies.size(); ++i){
        if(lastMovieEnd <= movies[i].first){
            lastMovieEnd = movies[i].second;
            ++counts;
        }
    }   
    cout << counts;
    return 0;    
}