#include <stdio.h>

int main() {
    int cnt=0;
    int n;
    scanf("%d", &n);

    while(n<1000){
        if(n%2==0){
            n=n*3+1;
        }
        else {
            n=n*2+2;
        }
        cnt++;
    }

    printf("%d", cnt);
    return 0;
}