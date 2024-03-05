#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void check(int a[], int n; int k){
    long long x = 1;
    for(int i = 0; i < n; i++){
        x = x * a[i];
    }

    if(2023 % x == 0){
        printf("YES\n");
        int a = 2023 / x;
        
    }
    else{
        printf("NO\n");
    }

}

int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        int n, k;
        scanf("%d %d", &n, &k);
        int a[n];
        for (int j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }
    }

    return 0;
}


