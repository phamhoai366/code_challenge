#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    int m;
    cin >> m;

    queue <int> q;
    stack <int> s;

    for(int i = 0; i < m; i++){
        int n;
        cin >> n;
        q.push(n);
        if (n == 1){
            int b; 
            cin >> b;
            q.push(b);
        }
    }

    // while (!q.empty()){
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    // cout << "result\n";
    while (!q.empty()){
        if (q.front() == 1){
            q.pop();
            s.push(q.front());
            q.pop();
        }
        else if(q.front() == 2){
            q.pop();
            if(!s.empty()){
                s.pop();
            }
        }
        else{
            q.pop();
            if(!s.empty()){
                cout << s.top() << endl;
            }
            else{
                cout << "Empty!\n";
            }
        }
    }

    return 0; 
}
