#include <stdio.h>
#include <string.h>

int main() {
    char str[21];
    char a;

    scanf("%s", str);
    scanf(" %c", &a);

    int index=0;
    int len=strlen(str);

    for(int i=0; i<len; i++){
        if(str[i]==a){
        printf("%d", i);
        break;
        }
        index++;
    }

    if(index==len)
    printf("No");

    return 0;
}