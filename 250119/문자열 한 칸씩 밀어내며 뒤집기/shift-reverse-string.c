#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    char num[1001];
    char s[1001];
    int n;

    scanf("%s", str);
    int len=strlen(str);
    scanf("%d", &n);

    for(int i=0; i<n; i++)
{
    int a;
    scanf("%d", &a);
    if(a==1){
        char n_1=str[0];
        for(int i=0; i<len-1; i++){
            str[i]=str[i+1];
        }
        str[len-1]=n_1;
        printf("%s\n", str);
    }
    else if(a==2){
        char n_2=str[len-1];
        for(int i=len-1; i>0; i--){
            str[i]=str[i-1];
        }
        str[0]=n_2;
        printf("%s\n", str);

    }
    else if(a==3){
        for(int i=0; i<len; i++){
            s[i]=str[len-i-1];
        }
        for(int i=0; i<len; i++){
            str[i]=s[i];
        }
        str[len]='\0';
        printf("%s\n", str);
    }

}
    return 0;
}