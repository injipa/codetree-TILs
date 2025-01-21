#include <stdio.h>

int print_f(int a){
    int sum=0;
    for(int i=1; i<=a; i++){
        sum+=i;
    }
    int result=sum/10;

    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d",print_f(n));
    return 0;
}