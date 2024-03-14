// #include<iostream>
// #include<stdlib.h>
// #include<climits>
// #include<queue>

// using namespace std;

// void delFirst(int arr[], int n){
//     for(int i = 0; i < n-1; i++){
//         arr[i] = arr[i+1];
//     }
// }

// void delLast(int arr[], int n){
//     arr[n-1] = 0;
// }

// void addFirst(int arr[], int n, int x){
//     for(int i = n; i > 0; i--){
//         arr[i] = arr[i-1];
//     }
//     arr[0] = x;
// }

// void AddLast(int arr[], int n, int x){
//     arr[n] = x;
// }

// int maxSubarraySum(int arr[], int n) {
//     int maxSum = INT_MIN;
//     int currentSum = 0;

//     for (int i = 0; i < n; i++) {
//         currentSum += arr[i];
//         if (currentSum > maxSum) {
//             maxSum = currentSum;
//         }
//         if (currentSum < 0) {
//             currentSum = 0;
//         }
//     }
//     return maxSum;
// }

// int main() {
//     int t;
//     cin >> t;
//     queue<int> q;
//     queue<int> q1;
//     queue<int> q2;

//     for(int i = 0; i < t; i++){
//         int n; 
//         cin >> n;
//         q.push(n);

//         int *arr = new int[n];
//         for(int j = 0; j < n; j++){
//             cin >> arr[j];
//             q1.push(arr[j]);
//         }
//         int m;
//         cin >> m;
//         q.push(m);
//         int b[m];
//         for(int j = 0; j < m; j++){
//             cin >> b[j];
//             q2.push(b[j]);
//         }
//     }

//     while(!q.empty()){
//         int a = q.front();
//         q.pop();

//         int c[a];
//         for(int i = 0; i < a; i++){
//             c[i] = q1.front();
//             q1.pop();
//         }
//         int m = q.front();
//         q.pop();
//         int d[m];
//         for(int i = 0; i < m; i++){
//             d[i] = q2.front();
//             q2.pop();
//         }

//         int sum1 = 0, sum2 = 0;

//         if(a % 2 == 0){
//            for(int i = 0; i < a/2; i++){
//                 sum1 += c[i];
//             }
//             for(int i = a/2; i < a; i++){
//                 sum2 += c[i];
//             } 
//         }
//         else{
//             for(int i = 0; i <= a/2; i++){
//                 sum1 += c[i];
//             }
//             for(int i = a/2; i < a; i++){
//                 sum2 += c[i];
//             }
//         }
//         while(m != 0){
//             if(sum1 >= sum2){
//                 if(d[0] > d[m-1]){
//                     if(d[0] > 0){
//                         addFirst(c, a, d[0]);
//                         a += 1; 
//                         delFirst(d, m);
//                         m -= 1;
//                     }
//                     else{
//                         AddLast(c, a, d[0]);
//                         a += 1;
//                         delFirst(d, m);
//                         m -= 1;
//                     }
//                 }
//                 else{
//                     if(d[m-1] > 0){
//                         addFirst(c, a, d[m-1]);
//                         a += 1;
//                         delLast(d, m);
//                         m -= 1;
//                     }
//                     else{
//                         AddLast(c, a, d[m-1]);
//                         a += 1;
//                         delLast(d, m);
//                         m -= 1;
//                     }
//                 }
//             }
//             else{
//                 if(d[0] > d[m-1]){
//                     if(d[0] > 0){
//                         AddLast(c, a, d[0]);
//                         a += 1;
//                         delFirst(d, m);
//                         m -= 1;
//                     }
//                     else{
//                         addFirst(c, a, d[0]);
//                         a += 1;
//                         delFirst(d, m);
//                         m -= 1;
//                     }
//                 }
//                 else{
//                     if(d[m-1] > 0){
//                         AddLast(c, a, d[m-1]);
//                         a += 1;
//                         delLast(d, m);
//                         m -= 1;
//                     }
//                     else{
//                         addFirst(c, a, d[m-1]);
//                         a += 1;
//                         delLast(d, m);
//                         m -= 1;
//                     }
//                 }
//             }

//             // for(int i = 0; i < a; i++){
//             //         cout << c[i] << " ";
//             // }
//             // cout << endl;
//             // }

//         }
//         cout << maxSubarraySum(c, a) << endl;
//     }
//     return 0;
// }





#include<iostream>
#include<stdlib.h>
#include<climits>

using namespace std;

void delFirst(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
}

void addFirst(int arr[], int n, int x){
    for(int i = n; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = x;
}

void AddLast(int arr[], int n, int x){
    arr[n] = x;
}

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

        int arr[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        int m;
        cin >> m;
        int b[m];
        for(int j = 0; j < m; j++){
            cin >> b[j];
        }

        int sum1 = 0, sum2 = 0;
        if(n % 2 == 0){
           for(int i = 0; i < n/2; i++){
                sum1 += arr[i];
            }
            for(int i = n/2; i < n; i++){
                sum2 += arr[i];
            } 
        }
        else{
            for(int i = 0; i <= n/2; i++){
                sum1 += arr[i];
            }
            for(int i = n/2; i < n; i++){
                sum2 += arr[i];
            }
        }

        while(m != 0){
            if (sum1 >= sum2){
            if(b[0] >= 0){
                addFirst(arr, n, b[0]);
                n += 1;
                delFirst(b, m);
                m -= 1;
            }
            else{
                AddLast(arr, n, b[0]);
                n += 1;
                delFirst(b, m);
                m -= 1;
            }
        }
        else{
            if(b[0] >= 0){
                AddLast(arr, n, b[0]);
                n += 1;
                delFirst(b, m);
                m -= 1;
            }
            else{
                addFirst(arr, n, b[0]);
                n += 1;
                delFirst(b, m);
                m -= 1;
            }
        }
        // for(int j = 0; j < n; j++){
        //     cout << arr[j] << " ";
        // }

        cout << maxSubarraySum(arr, n) << endl;
    }
        }
    return 0;
}
