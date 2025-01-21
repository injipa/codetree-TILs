#include <stdio.h>

int ans(int a){
    if(a%4==0||(a%100==0&&a%400==0))
    return 1;
}

int main() {
    int year;
    scanf("%d", &year);

    if(ans(year)==1)
    printf("true");
    else
    printf("false");
    
    return 0;
}