#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    char b[101];
    char c[201];
    char d[201];

    scanf("%s", a);
    scanf("%s", b);

    int len_a=strlen(a);
    int len_b=strlen(b);
    
    int index=0;
    for(int i=0; i<len_a; i++){
        c[index]=a[i];
        index++;
    }
    for(int i=0; i<len_b; i++){
        c[index]=b[i];
        index++;
    }
    c[len_a+len_b]='\0';

    index=0;
    for(int i=0; i<len_b; i++){
        d[index]=b[i];
        index++;
    }
    for(int i=0; i<len_a; i++){
        d[index]=a[i];
        index++;
    }
    d[len_a+len_b]='\0';

    if (strcmp(c, d) == 0)
    printf("true");
    else
    printf("false");


    return 0;
}