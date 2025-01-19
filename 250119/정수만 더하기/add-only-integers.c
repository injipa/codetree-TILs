#include <stdio.h>
#include <ctype.h>

int main() {
    char str[21];
    scanf("%s", str);

    int num=0;
    for(int i=0; str[i]!='\0'; i++){
        if('0'<=str[i]&&str[i]<='9'){
            num+=str[i]-'0';
        }
        }
    

    printf("%d", num);
    return 0;
}