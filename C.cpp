#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int x,y;
        cin >> x >> y;
        if(x > x1 && x < x2 && y > y1 && y < y2){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}