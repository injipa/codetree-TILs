#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int n;
    int num=0;
    scanf("%d", &n);

    while(n!=1){
        if(n%2==0)
        {
            n/=2;
        }
        else if(n%2==1)
        {
            n=n*3+1;
        }
        num++;
    }

    printf("%d", num);
    return 0;
}