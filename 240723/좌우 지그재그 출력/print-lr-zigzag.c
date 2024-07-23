#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt=1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0)
            {printf("%d ", cnt+j);}
            else
            printf("%d ",cnt+n-1-j);
        }
        cnt=cnt+n;
        printf("\n");
    }
    return 0;
}