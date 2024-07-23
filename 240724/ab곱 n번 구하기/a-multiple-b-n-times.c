#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a, b;
        scanf("%d%d", &a,&b);
        int prod=1;

        for(int j=a; j<=b;j++){
            prod*=j;
        }
        printf("%d\n", prod);
    }
    return 0;
}