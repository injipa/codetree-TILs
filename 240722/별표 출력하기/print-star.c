#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<(i+1); j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int k=0; k<(n-1); k++){
        for(int l=(n-1-k); l>0; l--){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}