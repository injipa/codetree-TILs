#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=n; j>0; j--){
            printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;
}