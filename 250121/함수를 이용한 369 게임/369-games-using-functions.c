#include <stdio.h>

int ans(int n, int m){
    int up=0;
    for(int i=n; i<=m; i++){
        int index=0;
        int temp=i;

        if(temp%3==0){
        index++;
        }
        
        while(temp>0){
            if(temp%10==3||temp%10==6||temp%10==9){
            index++;
            break;
            }
            temp=temp/10;
        }

        if(index==1||index==2)
        up++;
    }
    return up;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d", ans(a, b));
    return 0;
}