#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];

    int index=0;
    scanf("%s", a);
    scanf("%s", b);
    int len=strlen(a);

    while(1){
        
        char last=a[len-1];
    for(int i=len-1; i>0; i--){
        a[i]=a[i-1];
    }
    a[0]=last;
    a[len]='\0';
    index++;

    if(strcmp(a, b)==0){
    printf("%d", index);
    break;}

    if(index==len){
    printf("%d", -1);
    break;
    }

    }

    return 0;
}