#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c;
    scanf("%d%d", &a, &b);

    c=a+b;


    char str[1001];
    sprintf(str,"%d", c);
    
    int len=strlen(str);
    int index=0;

    for(int i=0; i<len; i++){
        if(str[i]=='1'){
            index++;
        }
    }

    printf("%d", index);




    return 0;
}