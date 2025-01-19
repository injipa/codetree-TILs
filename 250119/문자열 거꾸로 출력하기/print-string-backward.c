#include <stdio.h>
#include <string.h>

int main() {
    char str_1[10][101];
    int index=0;
    char ans[4]="END";
    
    for(int i=0; i<10; i++){
        scanf("%s", &str_1[i]);
        if(strcmp(str_1[i], ans)==0)
        break;
        index++;
    }

    char str_2[101];
    for(int i=0; i<index; i++){
        int len=strlen(str_1[i]);
        for(int j=0; j<len; j++){
            str_2[j]=str_1[i][len-j-1];
        }
        str_2[len]='\0';
        printf("%s\n", str_2);
    }

    return 0;
}