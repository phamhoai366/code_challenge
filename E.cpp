#include <iostream>
#include <climits>
#include <stdlib.h>
#include <queue>
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

// Inserting an element at the beginning of the array
void AddBegin(int c[], int size, int n){
    int newSize = size + 1;
    int newC[newSize];

    newC[0] = n;
    for(int j = 0; j < size; j++){
    newC[j + 1] = c[j];
    }
}

// Inserting an element at the end of the array
void AddEnd(int c[], int size, int n){
    int newSize = size + 1;
    int newC[newSize];

    for(int j = 0; j < size; j++){
        newC[j] = c[j];
    }
    newC[newSize - 1] = n;
}

// Deleting an element from the beginning of the array
void DelBegin(int c[], int size){
    int newSize = size - 1;
    int newC[newSize];

    for(int j = 0; j < newSize; j++){
        newC[j] = c[j + 1];
    }
}

// Deleting an element from the end of the array
void DelEnd(int c[], int size){
    int newSize = size - 1;
    int newC[newSize];

    for(int j = 0; j < newSize; j++){
        newC[j] = c[j];
    }
}

int main() {
    int t;
    cin >> t;
    queue<int> q;
    queue<int> q1;
    queue<int> q2;

    for(int i = 0; i < t; i++){
        int n; 
        cin >> n;
        q.push(n);

        int *arr = new int[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
            q1.push(arr[j]);
        }
        int m;
        cin >> m;
        q.push(m);
        int b[m];
        for(int j = 0; j < m; j++){
            cin >> b[j];
            q2.push(b[j]);
        }
    }

    int size;
    int array[size];

    while(!q.empty()){
        int a = q.front();
        q.pop();
        int b = q.front();
        q.pop();
        size = a + b;

        int c[a];
        for(int i = 0; i < a; i++){
            c[i] = q1.front();
            q1.pop();
        }
        int d[b];
        for(int i = 0; i < b; i++){
            d[i] = q2.front();
            q2.pop();
        }

        int sum1 = 0, sum2 = 0;

        if(a % 2 == 0){
           for(int i = 0; i < a/2; i++){
                sum1 += c[i];
            }
            for(int i = a/2; i < a; i++){
                sum2 += c[i];
            } 
        }
        else{
            for(int i = 0; i <= a/2; i++){
                sum1 += c[i];
            }
            for(int i = a/2; i < a; i++){
                sum2 += c[i];
            }
        }

        if(sum1 > sum2){
            if(d[0] > d[b-1]){
                if(d[0] > 0){
                    AddBegin(c, a, d[0]);
                    a += 1;
                    DelBegin(d, b);
                    b -= 1;
                }
                else{
                    AddEnd(c, a, d[b-1]);
                    a += 1;
                    DelBegin(d, b);
                    b -= 1;
                }
            }
            else{
                if(d[b-1] > 0){
                    AddEnd(c, a, d[b-1]);
                    a += 1;
                    DelEnd(d, b);
                    b -= 1;
                }
                else{
                    AddBegin(c, a, d[0]);
                    a += 1;
                    DelEnd(d, b);
                    b -= 1;
                }
            }
        }
        else{
            if(d[0] > d[b-1]){
                if(d[0] > 0){
                    AddEnd(c, a, d[0]);
                    a += 1;
                    DelBegin(d, b);
                    b -= 1;
                }
                else{
                    AddBegin(c, a, d[b -1]);
                    a += 1;
                    DelBegin(d, b);
                    b -= 1;
                }
            }
            else{
                if(d[b-1] > 0){
                    AddEnd(c, a, d[b-1]);
                    a += 1;
                    DelEnd(d, b);
                    b -= 1;
                }
                else{
                    AddEnd(c, a, d[b-1]);
                    a += 1;
                    DelEnd(d, b);
                    b -= 1;
                }
            }
        }
        
        for(int i = 0; i < size; i++){
            array[i] = c[i];
            cout << c[i] << " ";
        }
    }


    int maxSum = maxSubarraySum(array, size);
    cout << maxSum << endl;
    
    return 0;
}