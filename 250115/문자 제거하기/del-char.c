#include <stdio.h>
#include <string.h>

int main() {
    char str[21];
    scanf("%s", str);

    int len=strlen(str);

    while(len>1){

        int a;
        scanf("%d", &a);

        if(a>=len)
        str[len-1]='\0';

        else{
        for(int j=a; j<len-1; j++){
            str[j]=str[j+1];
        }
        str[len-1]='\0';
        }
        len--;
        printf("%s\n", str);
    }


    return 0;
}