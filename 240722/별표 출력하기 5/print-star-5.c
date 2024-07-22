#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=(n-i); j>0; j--){
            for(int a=0; a<(n-i); a++){
            printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}