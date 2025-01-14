#include <stdio.h>
#include <string.h>

int main() {
    char str_1[1001];
    char str_2[3];

    scanf("%s", str_1);
    scanf("%s", str_2);

    int count=0;
    int len=strlen(str_1);

    for(int i=0; i<len-1; i++){
            if(str_1[i]==str_2[0]&&str_1[i+1]==str_2[1])
            count++;
        
    }


    printf("%d", count);
    return 0;
}