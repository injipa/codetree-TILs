#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    for(int i=0; i<m; i++){
        int n;
        scanf("%d", &n);
        int cnt=0;

        while(n!=1)
    {
        if(n%2==0)
        n=n/2;
        else
        n=3*n+1;

        cnt++;
    }

    printf("%d\n", cnt);
    }
    return 0;
}