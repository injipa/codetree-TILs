#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    str[1]='a';
    str[strlen(str)-2]='a';

    printf("%s", str);

    return 0;
}