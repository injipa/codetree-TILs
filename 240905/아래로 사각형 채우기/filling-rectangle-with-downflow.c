#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int arr_2d[10][10];

    int num=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr_2d[j][i]=num;
            num++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr_2d[i][j]);
            num++;
        }
        printf("\n");
    }

    return 0;
}