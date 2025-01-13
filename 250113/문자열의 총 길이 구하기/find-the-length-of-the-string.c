#include <stdio.h>
#include <string.h>

int main() {
    char str[10][200];

    for(int i=0; i<10; i++){
        scanf("%s", str[i]);
    }

    int len=0;
    for(int i=0; i<10; i++){
        len+=strlen(str[i]);
    }

    printf("%d", len);

    return 0;
}