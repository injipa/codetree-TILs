#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n\n");
    }

    for(int i=0; i<(n-1); i++){
        for(int j=(n-i-1); j>0; j--){
            printf("*");
        }
        printf("\n\n");
    }
    return 0;
}