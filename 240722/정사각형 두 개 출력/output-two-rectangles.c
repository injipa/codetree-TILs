#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int a=0; a<2; a++){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        printf("*");
        }
        printf("\n");
    }
    printf("\n");
    }
    return 0;
}