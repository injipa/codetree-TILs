#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[6];
    sprintf(str, "%d", n);

    int sum=0;

    for(int i=0; str[i]!='\0'; i++){
        sum+=str[i]-'0';
    }

    printf("%d", sum);


    return 0;
}