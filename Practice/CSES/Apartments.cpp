# include <bits/stdc++.h>
# pragma GCC optimize("O3")
using namespace std;

void fastio(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){
    fastio();
    int n, m, k;
    cin >> n >> m >> k;
    vector <int> applicants (n);
    vector <int> apartments (m);

    for (auto &i : applicants) cin >> i;
    for (auto &i : apartments) cin >> i;

    sort(apartments.begin(), apartments.end());
    sort(applicants.begin(), applicants.end());

    // Two pointers approach
    int i = 0, j = 0;
    int numApplicantsGotApartment = 0;
    while (i < n && j < m){
        if (abs(applicants[i] - apartments[j]) <= k){
            // Happy Applicant
            numApplicantsGotApartment ++;
            i++;
            j++;
        } 
        else if (applicants[i] - apartments[j] > k){
            // If smaller apartmenet size
            j++;
        }
        else {
            // If customer not satisifed, ignore
            i++;
        }
    }

    cout << numApplicantsGotApartment;
    return 0;    
}