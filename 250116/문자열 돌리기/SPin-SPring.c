#include <stdio.h>
#include <string.h>

int main() {
    char str[11];
    scanf("%s", str);

    int len=strlen(str);

    printf("%s\n", str);

    for(int i=0; i<len; i++){
       char a=str[len-1];
       for(int j=len-1; j>0; j--){
       str[j]=str[j-1];
       }
       str[0]=a;
       printf("%s\n", str);
    }


    return 0;
}