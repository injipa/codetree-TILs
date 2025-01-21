#include <stdio.h>

int ans(int a){
    if(a%2==0&&((a/10)+(a%10))%5==0)
    return 1;
    else
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    if(ans(n)==1)
    printf("Yes");
    else
    printf("No");
    return 0;
}