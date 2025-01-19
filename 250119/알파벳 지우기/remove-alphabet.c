#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[9], b[9];
    char str_a[9], str_b[9];

    scanf("%s %s", a, b);

    int len_a=strlen(a);
    int len_b=strlen(b);
    int index_a=0;
    int index_b=0;

    for(int i=0; i<len_a; i++){
        if('0'<=a[i]&&a[i]<='9'){
        str_a[index_a++]=a[i];
        }
    }
    str_a[index_a]='\0';

    for(int i=0; i<len_b; i++){
        if('0'<=b[i]&&b[i]<='9'){
        str_b[index_b++]=b[i];
        }
    }
    str_b[index_b]='\0';

    printf("%d", atoi(str_a)+atoi(str_b));

    return 0;
}