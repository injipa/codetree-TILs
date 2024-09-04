#include <stdio.h>

int main() {
    int arr_2d[4][4];
    int sum=0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++)
        scanf("%d", &arr_2d[i][j]);
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<=i; j++)
        sum+=arr_2d[i][j];
    }

    printf("%d", sum);

    return 0;
}