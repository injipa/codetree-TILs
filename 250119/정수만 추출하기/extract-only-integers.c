#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[9], b[9];
    char c[9], d[9];

    scanf("%s", a);
    scanf(" %s", b);



    int len_a=strlen(a);
    int len_b=strlen(b);

    int index_a=0;
    int index_b=0;

    for(int i=0; '0'<=a[i]&&a[i]<='9'; i++){
        c[index_a++]=a[i];
    }

    for(int i=0; '0'<=b[i]&&b[i]<='9'; i++){
        d[index_b++]=b[i];
    }

    printf("%d", atoi(c)+atoi(d));



    return 0;
}