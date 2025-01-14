#include <stdio.h>
#include <string.h>

int main() {
    char str[21];
    scanf("%s", str);

    int index_1=0;
    int index_2=0;
    int len=strlen(str);

    for(int i=0; i<len-1; i++){
        if(str[i]=='e'&&str[i+1]=='e')
        index_1++;
    }

     for(int i=0; i<len-1; i++){
        if(str[i]=='e'&&str[i+1]=='b')
        index_2++;
    }

    printf("%d %d", index_1, index_2);

    return 0;
}