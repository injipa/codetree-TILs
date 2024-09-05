#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int arr_1d[10][10];
    int arr_2d[10][10];
    int arr_3d[10][10];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr_1d[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr_2d[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            
            if(arr_1d[i][j]==arr_2d[i][j])
            printf("0 ");
            else
            printf("1 ");
        }
        printf("\n");
    }

    return 0;
}