#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    for(int i=strlen(str)-1; i>=0; i--){
        if(i%2==1)
        printf("%c", str[i]);
    }

    return 0;
}