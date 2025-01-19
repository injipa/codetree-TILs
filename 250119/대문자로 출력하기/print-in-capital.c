#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[101];
    scanf("%s", str);

    for(int i=0; str[i]!='\0'; i++){
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        printf("%c", toupper(str[i]));
    }
    

    return 0;
}