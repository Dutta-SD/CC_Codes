# include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void solve(){
    int a1[5] = {1, 3, 4, 8, 9};
    int a2[3] = {2, 6, 7};

    for(int i = 0; i < 5; ++i){

        if(a1[i] > a2[0]){
            // If more than beginning, then swap
            // then insert in proper position
            swap(a1[i], a2[0]);
            int f = a2[0];
            int j;
            for(j = 1; j < 3 && a2[j] < f; ++j){
                a2[j-1] = a2[j];
            }

            a2[j-1] = f;
        }
    }

    printArray(a1, 5);
    printArray(a2, 3);

}

int main(){
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}