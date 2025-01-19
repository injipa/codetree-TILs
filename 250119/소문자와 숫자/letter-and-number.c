#include <stdio.h>
#include <ctype.h>

int main() {
    char str [101];
    scanf("%s", str);

        for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0'; // 개행문자 제거
            break;
        }
    }

    for(int i=0; str[i]!='\0'; i++){
        if(('A'<=str[i]&&str[i]<='z')||('a'<=str[i]&&str[i]<='z'))
        {
            printf("%c", tolower(str[i]));
        }
        else if('0'<=str[i]&&str[i]<='9'){
            printf("%c", str[i]);
        }
    }

    return 0;
}