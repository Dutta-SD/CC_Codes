# include <bits/stdc++.h>
using namespace std;

# define MAX_LEN 1000

char* urlify(char* s, int length){

    // 0 .. length - 1 chars, s[length] = '\0'

    int n_sp = 0;
    for(int i = 0; i < length; ++i) n_sp += (s[i] == ' ');

    int final_length = length + n_sp * 2;

    s[final_length] = '\0';

    for(int i = length - 1; i >= 0; --i){
        if(s[i] == ' '){
            s[--final_length] = '0';
            s[--final_length] = '2';
            s[--final_length] = '%';
        } 
        else s[--final_length] = s[i];        
    }

    return s;    
}

int main(){
    char s[MAX_LEN] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    int l = 12;

    char *p = urlify(s, l);
    while(*p) printf("%c", *p++);
    return 0;
}

