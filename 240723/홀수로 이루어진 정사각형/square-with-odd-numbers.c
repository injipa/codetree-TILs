#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",11+(i*2)+(j*2));
        }
        printf("\n");
    }
    return 0;
}