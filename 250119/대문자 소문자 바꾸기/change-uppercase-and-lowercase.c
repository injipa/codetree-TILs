#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[21];
    scanf("%s", str);

    int len=strlen(str);

    for(int i=0; i<len; i++){
        if('A'<=str[i]&&str[i]<='Z'){
            printf("%c", tolower(str[i]));
        }
        if('a'<=str[i]&&str[i]<='z'){
            printf("%c", toupper(str[i]));
        }
    }
    return 0;
}