#include <stdio.h>

int ans(int n, int m){
    int result=1;
    for(int i=0; i<m; i++){
        result*=n;
    }
    return result;
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);

    printf("%d", ans(a, b));
    return 0;
}