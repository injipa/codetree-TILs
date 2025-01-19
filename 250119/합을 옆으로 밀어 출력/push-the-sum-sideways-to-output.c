#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[101][5];

    for(int i=0; i<n; i++){
        scanf(" %s", a[i]);
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=atoll(a[i]);
    }

    char b[7];
    sprintf(b, "%d", sum);

    int len=strlen(b);
    char c=b[0];
    for(int i=0; i<len-1; i++){
        b[i]=b[i+1];
    }
    b[len-1]=c;
    b[len]='\0';

    printf("%s", b);
    
    return 0;
}