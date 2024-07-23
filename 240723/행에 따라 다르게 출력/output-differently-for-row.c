#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0)
           {cnt++; 
            printf("%d ", cnt);}
            else
            {
            cnt+=2;    
            printf("%d ", cnt);
            }
        }
        printf("\n");
    }
    return 0;
}