#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char a[1001], b[1001],c[1001];
    scanf("%s %s",a, b);

    int len=strlen(a);
    for(int i=0; i<len; i++){
    c[i]=a[i];
    }
    strcat(a, b);
    strcat(b, c);

    int d=atoi(a)+atoi(b);

    printf("%d", d);


    
    return 0;
}