# include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b){
    // Returns LCM
    return (a * b) / (__gcd(a, b)); 
}

void solve(){
    string s, t;
    cin >> s;
    cin >> t;
    int lcm_both = lcm(s.size(), t.size()); 
    int mul_s =  lcm_both/ s.size();
    int mul_t = lcm_both / t.size();

    string s1 = s;
    string t1 = t;

    for (int i = 1; i < mul_s; ++i){
        s += s1;
        // Concat String
    } 
    for (int i = 1; i < mul_t; ++i){
        t += t1;
    }
    if(s.compare(t) != 0){
        cout << -1 <<"\n";
    } else {
        cout << s << "\n";
    }
}


int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}