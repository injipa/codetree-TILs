#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    int n;
    scanf("%d", &n);
    
    if(n>=strlen(str)){
    for(int i=strlen(str)-1; i>=0; i--){
        printf("%c", str[i]);
    }
    }
    else{
    for(int i=strlen(str)-1; i>=strlen(str)-n; i--){
        printf("%c", str[i]);
    }
    }
    return 0;
}