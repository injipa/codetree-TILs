#include <stdio.h>
#include <string.h>

int main() {
    char str[10][21];
    char a;
    int cnt=0;

    for(int i=0; i<10; i++){
        scanf("%s", str[i]);
    }

    getchar();
    scanf("%c", &a);

    for(int i=0; i<10; i++){
        if(str[i][strlen(str[i])-1]==a){
        printf("%s\n", str[i]);
        cnt++;
        }
    }

    if(cnt==0)
    printf("None");

    return 0;
}