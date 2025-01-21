#include <stdio.h>

int main() {
    int n;
    int cnt=1;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(cnt==10){
                cnt=1;
            }
            printf("%d ", cnt++);
        }
        printf("\n");
    }
    return 0;
}