#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long q;
    cin >> q;

    stack <long long> s;

    while(q--){
        int n; 
        cin >> n;

        if (n == 1){
            long long b;
            cin >> b;
            s.push(b);
        }
        else if(n == 2){
            if(!s.empty()){
                s.pop();
            }
        }
        else{
            if(!s.empty()){
                cout << s.top() << '\n';
            }
            else{
                cout << "Empty!\n";
            }
        }
    }
    return 0;
}
