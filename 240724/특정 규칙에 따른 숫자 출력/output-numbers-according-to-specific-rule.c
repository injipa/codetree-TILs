#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt=1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<i){
                printf("  ");
            }
            else{
            printf("%d ", cnt);
            if(cnt!=9)
            cnt++;
            else
            cnt=1;}
        }
        printf("\n");
    }
    return 0;
}