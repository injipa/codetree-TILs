#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    int len=strlen(str);

    for(int i=1; i<len-1; i++){
        str[i]=str[i+1];
    }
    str[len-1]='\0';

    len=strlen(str);
    for(int i=len-2; i<len-1; i++){
        str[i]=str[i+1];
    }
    str[len-1]='\0';

    printf("%s", str);

    return 0;
}