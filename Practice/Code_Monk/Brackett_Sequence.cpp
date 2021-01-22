# include <bits/stdc++.h>
using namespace std;

bool isBrackettSequence(const string &s){
    stack <char> stk;
    for(auto i : s){
        if(i == '('){
            stk.push(i);
        }
        else {
            if(stk.empty()){
                return false;
            }
            stk.pop();
        }
    }
    if(stk.empty()) return true;
    return false;
}

int main() {
    string s; 
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); ++i){
        if(isBrackettSequence(s)) ++count;
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    cout << count;
    return 0;
}