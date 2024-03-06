#include<iostream>
#include<cstring>
#include<stdlib.h>
#include <queue>
using namespace std;

void encrypt(string s){
    for(int i = 0; i < s.length(); i++){
        for(int j = i+1; j < s.length(); j++){
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
    queue <string> q;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        char s[n+1];
        cin >> s;
        q.push(s);
    }

    while(!q.empty()){
        // cout << q.front() << endl;
        encrypt(q.front());
        cout << endl;
        q.pop();
    }
    return 0;
}
