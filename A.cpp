#include<iostream>
#include<cstring>
#include<stdlib.h>
#include <queue>
using namespace std;

void encrypt(char *s){
    for(int i = 0; i < strlen(s); i++){
        for(int j = i+1; j < strlen(s); j++){
            if (s[i] == s[j]){
                cout << s[i];
                i = j;
                break;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    queue<char> q;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        char s[n+1];
        cin >> s;
        encrypt(s);
    }
    return 0;
}
