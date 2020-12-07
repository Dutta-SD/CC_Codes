# include <iostream>
# include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector <long long> arr (n, 0);
    vector <long long> positions(1e5 + 8, 0);

    for(long long i = 0; i < n; ++i){
        cin >> arr[i];
        positions[arr[i]] = i;
    }
    long long m, query, pos;
    long long petya = 0, vasya = 0;
    cin >> m;
    for (long long i = 0; i < m; ++i){
        cin >> query;
        petya += positions[query] + 1;
        vasya += n - positions[query];
    }
    std::cout << petya << " " << vasya << "\n";
    return 0;
}