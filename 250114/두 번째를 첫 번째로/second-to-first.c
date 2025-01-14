#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    char a=str[0];
    char b=str[1];

    int len=strlen(str);

    for(int i=0; i<len; i++){
        if(str[i]==b)
        str[i]=a;
    }

    printf("%s", str);

    return 0;
}