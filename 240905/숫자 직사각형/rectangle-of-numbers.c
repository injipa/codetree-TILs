#include <stdio.h>

int main() {
    
    int n, m;
    scanf("%d %d", &n, &m);


    int num=1;
    for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        printf("%d ", num);
        num+=1;

    }
    printf("\n");
    }


    return 0;
}