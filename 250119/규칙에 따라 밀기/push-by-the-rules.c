#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    char num[101];

    scanf("%s", str);
    int len_s=strlen(str);
    scanf(" %s", num);
    int len_n=strlen(num);

    for(int i=0; i<len_n; i++){
        if(num[i]=='L'){
            int a=str[0];
            for(int i=0; i<len_s-1; i++){
            str[i]=str[i+1];
            }
            str[len_s-1]=a;
            str[len_s]='\0';
        }
        else if(num[i]=='R'){
            int a=str[len_s-1];
            for(int i=len_s-1; i>0; i--){
            str[i]=str[i-1];
            }
            str[0]=a;
            str[len_s]='\0';
        }
    }

    printf("%s", str);



    return 0;
}