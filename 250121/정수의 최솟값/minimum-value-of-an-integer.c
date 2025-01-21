#include <stdio.h>

int ans(int r1, int r2, int r3){
    int low=101;
    if(r1>r2){
        low=r2;
    }
    else{
        low=r1;
    }

    if(r3<low)
    low=r3;

    return low;

}

int main() {
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);

    printf("%d", ans(a, b, c));
    return 0;
}