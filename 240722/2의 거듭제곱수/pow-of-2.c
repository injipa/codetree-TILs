#include <stdio.h>

int main() {
    int n;
    int cnt=0;
    scanf("%d", &n);

    while(n!=1){
        n/=2;
        cnt++;
    }

    printf("%d", cnt);
    return 0;
}