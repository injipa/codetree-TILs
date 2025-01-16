#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    char number[1001];
    char answer[1001];
    int n;
    

    scanf("%s", str);
    int len=strlen(str);
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &number[i]);
    }

    for(int i=0; i<n; i++){
        
        if(number[i]==1){
            char c=str[0];
            for(int j=0; j<len-1; j++){
                str[j]=str[j+1];
            }
            str[len-1]=c;
            printf("%s\n", str);
        }
        if(number[i]==2){
            char c=str[len-1];
            for(int j=len-1; j>0; j--){
                str[j]=str[j-1];
            }
            str[0]=c;
            printf("%s\n", str);
        }
        if(number[i]==3){
           for(int j=0; j<len; j++){
            answer[j]=str[len-j-1];
           }
           answer[len]='\0';
           printf("%s\n", answer);
        }
    }
    return 0;
}