#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<(2*n); i++){
        if(i%2==0){
           for(int j=(n-(i/2)); j>0; j--){
            printf("* ");
           } 
        }
        else{
            for(int j=0; j<(i-(i/2)); j++){
                printf("* ");
            }
        }
        printf("\n");
    }
       
    return 0;
}