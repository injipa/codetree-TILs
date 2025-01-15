#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    int len=strlen(str);
    int index=0;

    for(int i=0; i<len; i++){
        if(str[i]=='e'){
        index=i;
        break;
        }
    }

    for(int i=index; i<len-1; i++){
        str[i]=str[i+1];
    }
    
    str[strlen(str)-1]='\0';

    printf("%s", str);


    return 0;
}