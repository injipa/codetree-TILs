#include <stdio.h>
 int arr_2d[5][5]={0};

int main() {
    for(int i=0; i<5; i++){
        arr_2d[0][i]=1;
    }
    for(int i =1; i<5; i++){
        arr_2d[i][0]=1;
    }

    for(int i=1; i<5; i++){
        for(int j=1; j<5; j++)
            arr_2d[i][j]=arr_2d[i-1][j]+arr_2d[i][j-1];
    }

     for(int i=0; i<5; i++){
        for(int j=0; j<5; j++)
        printf("%d ", arr_2d[i][j]);

        printf("\n");
    }

    return 0;
}