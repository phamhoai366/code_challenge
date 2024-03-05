#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n; 
        cin >> n;
        int *arr = new int[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        int m;
        cin >> m;
        int b[m];
        for(int j = 0; j < m; j++){
            cin >> b[j];
        }

        int size = n + m;
        int c[size];
        for(int j = 0; j < n; j++){
            c[j] = arr[j];
        }
        for(int j = 0; j < m; j++){
            c[n + j] = b[j];
        }
        // for(int j = 0; j < size; j++){
        //     cout << c[j] << " ";
        // }
        int maxSum = maxSubarraySum(c, size);
        cout << maxSum << endl;
    }
    
    return 0;
}

