# include <bits/stdc++.h>
// # define DEBUG 1
using namespace std;

void fastio(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    fastio();
    int n, x;
    cin >> n >> x;
    

    vector <int> prices (n + 1, 0);
    vector <int> pages (n + 1, 0);
    vector < vector<int> > maxPages (n + 1 , vector <int> (x + 1, 0));

    for(int i = 1; i <= n; ++i){
        cin >> prices[i];
    }

    for(int i = 1; i <= n; ++i){
        cin >> pages[i];
    }


    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= x; ++j){
            maxPages[i][j] = maxPages[i-1][j];
                      
            int remainingPrice = j - prices[i];

            if(remainingPrice >= 0){
                maxPages[i][j] = max(maxPages[i][j], pages[i] + maxPages[i-1][remainingPrice]);
            }            
        }
    }

    # ifdef DEBUG
    cout << "\n";
    for(int i = 0; i <= n; ++i){
        for(int j = 0; j <= x; ++j){
            cout << maxPages[i][j] <<"\t";                       
        }
        cout << "\n";
    }
    #endif

    cout << maxPages[n][x];

    return 0;    
}