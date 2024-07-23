#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a,&b);
    int count=0;
    

    for(int i=a; i<=b; i++){
        int cnt=0;
        for(int j=1; j<=i; j++){
            if(i%j==0)
            cnt++;
            }
            if(cnt==3)
            count++;
    }

    printf("%d", count);
    return 0;
}