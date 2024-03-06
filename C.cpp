#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    queue<int> qx;
    queue<int> qy;

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int x,y;
        cin >> x >> y;
        // if(x > x1 && x < x2 && y > y1 && y < y2){
        //     cout << "Yes" << endl;
        // } else {
        //     cout << "No" << endl;
        // }
        qx.push(x);
        qy.push(y);
    }

    while(!qx.empty() && !qy.empty()){
        // cout << qx.front() << " " << qy.front() << endl;
        int a = qx.front();
        int b = qy.front();

        if (a > x1 && a < x2 && b > y1 && b < y2){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

        qx.pop();
        qy.pop();
    }

    return 0;
}
