#include <stdio.h>
#include <string.h>

int main() {
    char str[201][201];
    int index=0;

    for(int i=0; i<200; i++){
        scanf("%s", str[i]);
        if(strcmp(str[i],"0")==0)
        break;
        index++;
    }

    printf("%d\n", index);

    for(int i=0; i<index; i++){
        if(i%2==0)
        printf("%s\n", str[i]);
    }


    return 0;
}