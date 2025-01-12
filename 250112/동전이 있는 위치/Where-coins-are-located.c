#include <stdio.h>
int arr[9][9]={0};

int main() {
    int n, m;
    int a, b;
    scanf("%d%d", &n, &m);

    for(int i=0; i<m; i++){
        scanf("%d%d", &a, &b);
        arr[a-1][b-1]=1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        if(i==a-1&&j==b-1)
        printf("%d ", arr[i][j]);
        else
        printf("%d ", arr[i][j]);}
        printf("\n");
    }
    return 0;
}