#include <stdio.h>

int main() {
    int arr_2d[2][4];

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++)
        scanf("%d", &arr_2d[i][j]);
    }

    for(int i=0; i<2; i++){
        double sum=0;
        for(int j=0; j<4; j++)
        sum+=arr_2d[i][j];

        printf("%.1lf ", sum/4);
        
    }

    printf("\n");
    
    for(int j=0; j<4; j++){
        double sum=0;
        for(int i=0; i<2; i++)
        sum+=arr_2d[i][j];

        printf("%.1lf ", sum/2);

    }

    printf("\n");

    double sum=0;

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++)
        sum+=arr_2d[i][j];
    }

        printf("%.1lf ", sum/8);
        
    


    return 0;
}