#include <stdio.h>
int n;
int arr[15][15]={0};
int main() {
    scanf("%d", &n);

    arr[0][0]=1;

    for(int i=1; i<n; i++){
        for(int j=0; j<=i; j++)
        arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
    }

     for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)
        printf("%d ", arr[i][j]);

        printf("\n");
    }


    return 0;
}